mod module;
mod panel;
mod utils;

use once_cell::sync::Lazy;
use serde;
use serde_json;
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

    Ok(())
}

#[wasm_bindgen]
pub fn parse(v: &str) -> Result<String, JsValue> {
    if v == "woot" {
        let state = STATE.lock().unwrap();
        let module = &state.module;
        let serialized = serde_json::to_string(&module).unwrap();

        Ok(serialized)
    } else {
        Err(JsValue::from("WTF?!?"))
    }
}

#[wasm_bindgen]
pub fn render() -> Result<String, JsValue> {
    let state = STATE.lock().unwrap();
    let module = &state.module;
    let panel = &module.light;

    return panel.to_SVG();
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
