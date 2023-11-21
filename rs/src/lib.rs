mod panel;
mod utils;

use once_cell::sync::Lazy;
use std::sync::Mutex;
use wasm_bindgen::prelude::*;

pub struct State {
    pub panel: panel::Panel,
}

static STATE: Lazy<Mutex<State>> = Lazy::new(|| {
    Mutex::new(State {
        panel: panel::new(),
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
        Ok("wooot".to_string())
    } else {
        Err(JsValue::from("WTF?!?"))
    }
}

#[wasm_bindgen]
pub fn render() -> String {
    let state = STATE.lock().unwrap();

    return state.panel.to_SVG();
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
