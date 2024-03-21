mod command;
mod commands;
mod history;
mod module;
mod panel;
mod svg;
mod utils;
mod vcv;

use std::sync::Mutex;

use once_cell::sync::Lazy;
use regex::Regex;
use serde;
use serde::Serialize;
use serde_wasm_bindgen;

use wasm_bindgen::prelude::*;
use wasm_bindgen_futures;
use web_sys::js_sys::Uint8Array;

use crate::utils::log;
use svg::PrettyPrinter;

pub struct State {
    module: module::Module,
    history: history::History,
}

#[derive(serde::Serialize)]
struct Serialized {
    pub name: String,
    pub serialized: String,
}

static STATE: Lazy<Mutex<State>> = Lazy::new(|| {
    Mutex::new(State {
        module: module::new(),
        history: history::new(),
    })
});

#[derive(Serialize)]
pub struct Info {
    pub module: Option<module::Info>,
    pub history: Option<history::Info>,
    pub command: Option<String>,
}

#[wasm_bindgen(raw_module = "../../javascript/api.js")]
extern "C" {
    fn set(object: &str);
    fn stash(tag: &str, blob: &str);
    async fn stashx(tag: &str, blob: &[u8]);
    async fn unstash(tag: &str) -> JsValue;
}

#[wasm_bindgen(start)]
pub fn main() -> Result<(), JsValue> {
    utils::set_panic_hook();

    console_log!("initialised VPD");
    Ok(())
}

#[wasm_bindgen]
pub async fn restore() -> Result<(), JsValue> {
    let mut state = STATE.lock().unwrap();

    // ... unstash project
    {
        let array = unstash("project").await;
        let bytes = Uint8Array::new(&array).to_vec();

        state.module.gunzip(&bytes);
    }

    // ... unstash undo history
    {
        let array = unstash("history").await;
        let bytes = Uint8Array::new(&array).to_vec();

        state.history.gunzip(&bytes);
    }

    // ... set state
    let info = Info {
        module: Some(state.module.info()),
        history: Some(state.history.info()),
        command: None,
    };

    let object = serde_json::to_string(&info).unwrap();
    set(&object);

    Ok(())
}

#[wasm_bindgen]
pub async fn exec(json: &str) -> Result<bool, JsValue> {
    match command::parse(json) {
        Ok(cmd) => {
            let mut state = STATE.lock().unwrap();

            if let Some(err) = cmd.validate(&mut state.module) {
                return Err(JsValue::from(format!("{}", err)));
            }

            if let Some(src) = &cmd.src {
                let blob = serde_json::to_string(&state.module).unwrap();

                state.history.push(src, &blob)
            }

            if cmd.apply(&mut state.module) {
                let info = Info {
                    module: Some(state.module.info()),
                    history: Some(state.history.info()),
                    command: None,
                };

                let project = serde_json::to_string(&state.module).unwrap();
                let projectz = state.module.gzip();
                let history = state.history.gzip();
                let object = serde_json::to_string(&info).unwrap();

                stash("project", &project);
                stashx("project", &projectz).await;
                stashx("history", &history).await;
                set(&object);

                Ok(true)
            } else {
                Ok(false)
            }
        }

        Err(e) => Err(JsValue::from(format!("{}", e))),
    }
}

#[wasm_bindgen]
pub async fn undo() -> Result<bool, JsValue> {
    let mut state = STATE.lock().unwrap();

    if let Some(v) = state.history.pop() {
        let cmd = v.0;
        let rs: Result<module::Module, serde_json::Error> = serde_json::from_str(&v.1);

        match rs {
            Ok(m) => {
                state.module = m;

                let info = Info {
                    module: Some(state.module.info()),
                    history: Some(state.history.info()),
                    command: Some(cmd),
                };

                let project = serde_json::to_string(&state.module).unwrap();
                let projectz = state.module.gzip();
                let history = state.history.gzip();
                let object = serde_json::to_string(&info).unwrap();

                stash("project", &project);
                stashx("project", &projectz).await;
                stashx("history", &history).await;
                set(&object);

                Ok(true)
            }

            Err(e) => Err(JsValue::from(format!("{}", e))),
        }
    } else {
        Ok(false)
    }
}

#[wasm_bindgen]
pub fn serialize(object: &str) -> Result<JsValue, JsValue> {
    let state = STATE.lock().unwrap();
    let module = &state.module;

    match object {
        "project" => {
            let serialized = Serialized {
                name: module.name.to_string(),
                serialized: serde_json::to_string_pretty(&module).unwrap(),
            };

            let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
            Ok(value)
        }

        "script" => {
            let serialized = Serialized {
                name: module.name.to_string(),
                serialized: module.script.join("\n"),
            };

            let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
            Ok(value)
        }

        "panel.svg" => match module.panel.export_SVG("light") {
            Ok(svg) => {
                let pp = PrettyPrinter::new();
                let blob = pp.prettify(&svg);
                let serialized = Serialized {
                    name: module.name.to_string(),
                    serialized: blob,
                };

                let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
                Ok(value)
            }

            Err(e) => Err(JsValue::from(format!("error generating SVG '{:?}'", e))),
        },

        "panel.svg.dark" => match module.panel.export_SVG("dark") {
            Ok(svg) => {
                let pp = PrettyPrinter::new();
                let blob = pp.prettify(&svg);
                let serialized = Serialized {
                    name: module.name.to_string(),
                    serialized: blob,
                };

                let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
                Ok(value)
            }

            Err(e) => Err(JsValue::from(format!("error generating SVG '{:?}'", e))),
        },

        "module.h" => {
            let prefix = Regex::new(r#"[^a-zA-Z0-9]+"#)
                .unwrap()
                .replace_all(&module.name, "_")
                .to_uppercase();

            match module.panel.export_header(&module.name, &prefix) {
                Ok(header) => {
                    // let pp = PrettyPrinter::new();
                    let blob = header.to_string();
                    let filename = format!("{}_widget.h", &module.name);

                    let serialized = Serialized {
                        name: filename,
                        serialized: blob,
                    };

                    let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
                    Ok(value)
                }

                Err(e) => Err(JsValue::from(format!("error generating .h file '{:?}'", e))),
            }
        }

        "module >>" => {
            let name = Regex::new(r#"[^a-zA-Z0-9_-]+"#)
                .unwrap()
                .replace_all(&module.name, "_");

            let string = format!(
                "$RACK_DIR/helper.py createmodule {0} res/{0}.svg src/{0}.cpp",
                &name
            );

            let blob = string.to_string();
            let filename = "<clipboard>";

            let serialized = Serialized {
                name: filename.to_string(),
                serialized: blob,
            };

            let value = serde_wasm_bindgen::to_value(&serialized).unwrap();
            Ok(value)
        }

        _ => Err(JsValue::from(format!("unknown object {}", object))),
    }
}

#[wasm_bindgen]
pub fn clear() -> Result<(), JsValue> {
    let mut state = STATE.lock().unwrap();

    state.module = module::new();
    Ok(())
}

#[wasm_bindgen]
pub fn load(json: &str) -> Result<(), JsValue> {
    let rs: Result<module::Module, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(m) => {
            let mut state = STATE.lock().unwrap();
            state.module = m;
            state.history.clear();

            // ... set state
            let info = Info {
                module: Some(state.module.info()),
                history: Some(state.history.info()),
                command: None,
            };

            let object = serde_json::to_string(&info).unwrap();
            set(&object);

            Ok(())
        }
        Err(e) => Err(JsValue::from(format!("{}", e))),
    }
}

#[wasm_bindgen]
pub fn render(theme: &str) -> Result<String, JsValue> {
    let state = STATE.lock().unwrap();
    let module = &state.module;
    let panel = &module.panel;
    let pp = PrettyPrinter::new();
    let svg = panel.to_SVG(theme);

    match svg {
        Ok(v) => Ok(pp.prettify(&v)),
        Err(e) => Err(JsValue::from(format!("{}", e))),
    }
}

#[wasm_bindgen]
pub fn query(dx: f32, dy: f32) -> Result<String, JsValue> {
    let state = STATE.lock().unwrap();
    let module = &state.module;
    let w = module.panel.width + 2.0 * module.panel.gutter;
    let h = module.panel.height + 2.0 * module.panel.gutter;
    let offset = module.panel.gutter;
    let x = dx * w - offset;
    let y = dy * h - offset;

    let rs = module.query(x, y);
    let json = serde_json::to_string(&rs).unwrap();

    Ok(json)
}
