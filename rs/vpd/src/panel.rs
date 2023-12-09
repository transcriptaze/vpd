use super::serde::{Deserialize, Serialize};

use tera::Context;
use tera::Tera;
use wasm_bindgen::prelude::*;

pub const DEFAULT_WIDTH: f32 = 45.72; // 9H
pub const DEFAULT_HEIGHT: f32 = 128.5; // 1U
pub const H: f32 = 5.08; // 1 'horizontal' unit

#[derive(Serialize, Deserialize)]
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

// TODO include_dir
//      https://crates.io/crates/include_dir
impl Panel {
    pub fn new(width: f32, _height: f32) -> Panel {
        let w = (width / H).round();

        return Panel {
            width: w * H,
            height: 128.5,
            gutter: 5.0,
        };
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self) -> Result<String, JsValue> {
        let panel = include_str!("templates/panel.svg");
        let styles = include_str!("templates/styles.svg");
        let backgrounds = include_str!("templates/backgrounds.svg");
        let guidelines = include_str!("templates/guidelines.svg");

        let mut tera = Tera::default();
        let mut context = Context::new();

        let svg = self.svg();
        let viewport = self.viewport();

        tera.add_raw_template("panel", &panel).unwrap();
        tera.add_raw_template("styles", &styles).unwrap();
        tera.add_raw_template("backgrounds", &backgrounds).unwrap();
        tera.add_raw_template("guidelines", &guidelines).unwrap();

        context.insert("svg_width", &format!("{:.2}", svg.width));
        context.insert("svg_height", &format!("{:.1}", svg.height));

        context.insert("viewport_x", &format!("{:.2}", viewport.x));
        context.insert("viewport_y", &format!("{:.2}", viewport.y));
        context.insert("viewport_width", &format!("{:.2}", viewport.width));
        context.insert("viewport_height", &format!("{:.1}", viewport.height));

        context.insert("panel_width", &format!("{:.2}", self.width));
        context.insert("panel_height", &format!("{:.1}", self.height));

        let svg = tera.render("panel", &context).unwrap();

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
