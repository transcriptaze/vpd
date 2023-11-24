use super::serde::Serialize;

use tera::Context;
use tera::Tera;
use wasm_bindgen::prelude::*;

#[derive(Serialize)]
pub struct Panel {
    width: f32,
    height: f32,
    gutter: f32,
}

pub struct Rect {
    x: f32,
    y: f32,
    width: f32,
    height: f32,
}

pub fn new() -> Panel {
    return Panel {
        width: 45.72,
        height: 128.5,
        gutter: 5.0,
    };
}

impl Panel {
    #[allow(non_snake_case)]
    pub fn to_SVG(&self) -> Result<String, JsValue> {
        let template = include_bytes!("panel.svg");
        let SVG = String::from_utf8_lossy(template);
        let mut tera = Tera::default();
        let mut context = Context::new();

        let svg = self.svg();
        let viewport = self.viewport();

        tera.add_raw_template("SVG", &SVG).unwrap();

        context.insert("svg_width", &format!("{:.2}", svg.width));
        context.insert("svg_height", &format!("{:.1}", svg.height));

        context.insert("viewport_x", &format!("{:.2}", viewport.x));
        context.insert("viewport_y", &format!("{:.2}", viewport.y));
        context.insert("viewport_width", &format!("{:.2}", viewport.width));
        context.insert("viewport_height", &format!("{:.1}", viewport.height));

        context.insert("panel_width", &format!("{:.2}", self.width));
        context.insert("panel_height", &format!("{:.1}", self.height));

        let svg = tera.render("SVG", &context).unwrap();

        Ok(svg.to_string())
    }

    fn svg(&self) -> Rect {
        Rect {
            x: 0.0,
            y: 0.0,
            width: self.width + 2.0 * self.gutter,
            height: self.height + 2.0 * self.gutter,
        }
    }

    fn viewport(&self) -> Rect {
        Rect {
            x: -self.gutter,
            y: -self.gutter,
            width: self.width + 2.0 * self.gutter,
            height: self.height + 2.0 * self.gutter,
        }
    }
}
