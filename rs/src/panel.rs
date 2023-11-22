use tera::Context;
use tera::Tera;
use wasm_bindgen::prelude::*;

#[wasm_bindgen]
pub struct Panel {
    width: f32,
    height: f32,
}

pub fn new() -> Panel {
    return Panel {
        width: 45.72,
        height: 128.5,
    };
}

#[wasm_bindgen]
impl Panel {
    #[allow(non_snake_case)]
    pub fn to_SVG(&self) -> Result<String, JsValue> {
        let template = include_bytes!("panel.svg");
        let SVG = String::from_utf8_lossy(template);
        let mut tera = Tera::default();
        let mut context = Context::new();

        tera.add_raw_template("SVG", &SVG).unwrap();

        context.insert("width", &format!("{:.2}", self.width));
        context.insert("height", &format!("{:.1}", self.height));

        let svg = tera.render("SVG", &context).unwrap();

        return Ok(svg.to_string());
    }
}
