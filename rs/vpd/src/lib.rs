mod command;
mod commands;
mod module;
mod panel;
mod svg;
mod utils;

use crate::utils::log;
use once_cell::sync::Lazy;
use serde;
use std::sync::Mutex;
use wasm_bindgen::prelude::*;

pub struct State {
    pub module: module::Module,
}

static STATE: Lazy<Mutex<State>> = Lazy::new(|| {
    Mutex::new(State {
        module: module::new(),
    })
});

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

            cmd.apply(module);

            let serialized = serde_json::to_string(&module).unwrap();

            Ok(serialized)
        }

        Err(e) => Err(JsValue::from(format!("{}", e))),
    }
}

#[wasm_bindgen]
pub fn serialize(object: &str) -> Result<String, JsValue> {
    if object == "project" {
        let state = STATE.lock().unwrap();
        let module = &state.module;
        let serialized = serde_json::to_string_pretty(&module).unwrap();

        Ok(serialized)
    } else {
        Err(JsValue::from(format!("unknown object {}", object)))
    }
}

#[wasm_bindgen]
pub fn restore(json: &str) -> Result<(), JsValue> {
    let rs: Result<module::Module, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(m) => {
            let mut state = STATE.lock().unwrap();
            state.module = m;
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

    return panel.to_SVG(theme);
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
