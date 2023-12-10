mod utils;

use tree_sitter_c2rust::Parser;
use wasm_bindgen::prelude::*;

macro_rules! console_log {
    ($($t:tt)*) => (log(&format_args!($($t)*).to_string()))
}

#[wasm_bindgen]
extern "C" {
    #[wasm_bindgen(js_namespace = console)]
    fn log(s: &str);
}

#[wasm_bindgen(start)]
pub fn main() -> Result<(), JsValue> {
    utils::set_panic_hook();

    let parser = Parser::new();

    parser.set_language(tree_sitter_vpd::language()).unwrap();

    console_log!("initialised grammar");
    Ok(())
}

#[wasm_bindgen]
pub fn parse(v: &str) -> Result<String, JsValue> {
    if v == "woot" {
        Ok("zoot".to_string())
    } else {
        Err(JsValue::from("WTF?!?"))
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
