mod utils;

use wasm_bindgen::prelude::*;

#[wasm_bindgen(start)]
pub fn main() -> Result<(), JsValue> {
    utils::set_panic_hook();

    // let window = web_sys::window().expect("no global `window` exists");
    // let document = window.document().expect("should have a document on window");
    // let body = document.body().expect("document should have a body");
    // let val = document.create_element("p")?;
    //
    // val.set_inner_html("Hello from Rust!");
    // body.append_child(&val)?;

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
    let svg = r#"<svg xmlns="http://www.w3.org/2000/svg"
     xmlns:svg="http://www.w3.org/2000/svg"
     xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape"
     version="1.1"
     width="45.72mm"
     height="128.5mm"
     viewBox="0 0 45.72 128.5">
  <defs>
    <style>
        @import url("https://fonts.googleapis.com/css?family=Roboto+Condensed");
        @import url("https://fonts.googleapis.com/css?family=Open+Sans");
        @import url("https://fonts.googleapis.com/css?family=Anonymous+Pro:400");
        @import url("https://fonts.googleapis.com/css?family=Style+Script");
        @import url("https://fonts.googleapis.com/css?family=Lato");
    </style>
  </defs>
  <g font-size="8px" text-anchor="middle">
    <text font-family="Roboto Condensed" x="22.86" y="20">Roboto Condensed</text>
    <text font-family="Open Sans"        x="22.86" y="40">Open Sans</text>
    <text font-family="Style Script"     x="22.86" y="60">ScriptThing</text>
    <text font-family="Lato"             x="22.86" y="80">Lato</text>
  </g>
</svg>"#;

    return svg.to_string();
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
