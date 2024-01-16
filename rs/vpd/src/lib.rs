mod command;
mod commands;
mod module;
mod panel;
mod svg;
mod utils;

use wasm_bindgen::prelude::*;

use crate::utils::log;
use once_cell::sync::Lazy;
use serde;
use serde_wasm_bindgen;
use std::sync::Mutex;

use svg::PrettyPrinter;

pub struct State {
    pub module: module::Module,
}

#[derive(serde::Serialize)]
struct Serialized {
    pub name: String,
    pub serialized: String,
}

static STATE: Lazy<Mutex<State>> = Lazy::new(|| {
    Mutex::new(State {
        module: module::new(),
    })
});

#[wasm_bindgen(raw_module = "../../javascript/rs.js")]
extern "C" {
    fn set(tag: &str, object: &str);
}

#[wasm_bindgen(start)]
pub fn main() -> Result<(), JsValue> {
    utils::set_panic_hook();

    console_log!("initialised VPD");
    Ok(())
}

#[wasm_bindgen]
pub fn exec(json: &str) -> Result<String, JsValue> {
    match command::new(json) {
        Ok(cmd) => {
            let mut state = STATE.lock().unwrap();
            let module = &mut state.module;

            if cmd.apply(module) {
                let info = module.info();
                let object = serde_json::to_string(&info).unwrap();
                set("module", &object);

                let serialized = serde_json::to_string(&module).unwrap();

                Ok(serialized)
            } else {
                Ok("".to_string())
            }
        }

        Err(e) => Err(JsValue::from(format!("{}", e))),
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

        "panel" => match module.panel.export_SVG("light") {
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

        "panel-dark" => match module.panel.export_SVG("dark") {
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

        _ => Err(JsValue::from(format!("unknown object {}", object))),
    }
}

#[wasm_bindgen]
pub fn restore(json: &str) -> Result<(), JsValue> {
    let rs: Result<module::Module, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(m) => {
            let mut state = STATE.lock().unwrap();
            state.module = m;

            let info = state.module.info();
            let object = serde_json::to_string(&info).unwrap();
            set("module", &object);

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

// #[cfg(test)]
// mod tests {
//     // Note this useful idiom: importing names from outer (for mod tests) scope.
//     // use super::*;
//
//     #[test]
//     fn test_add() {
//         assert_eq!(1+2, 3);
//     }
//
//     #[test]
//     fn test_bad_add() {
//         // This assert would fire and test will fail.
//         // Please note, that private functions can be tested too!
//         assert_eq!(4-1, 3);
//     }
// }
