use std::collections::HashMap;

use serde::{Deserialize, Serialize};

use tera::Context;
use tera::Tera;
use wasm_bindgen::prelude::*;

use crate::panel::Guide;
use crate::panel::Label;
use crate::svg::Line;
use crate::svg::Point;

pub const H: f32 = 5.08; // 1 'horizontal' unit

#[derive(Serialize, Deserialize)]
pub struct Panel {
    width: f32,
    height: f32,
    gutter: f32,
    pub origin: Origin,
    pub guides: HashMap<String, Guide>,
    pub labels: Vec<Label>,
}

#[derive(Serialize, Deserialize)]
pub struct Origin {
    pub x: String,
    pub y: String,
}

#[derive(Serialize, Deserialize)]
pub struct Rect {
    pub x: f32,
    pub y: f32,
    pub width: f32,
    pub height: f32,
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
            origin: Origin {
                x: "left".to_string(),
                y: "top".to_string(),
            },
            guides: HashMap::new(),
            labels: Vec::new(),
        };
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, _theme: &str) -> Result<String, JsValue> {
        let panel = include_str!("templates/panel.svg");
        let styles = include_str!("templates/styles.svg");
        let backgrounds = include_str!("templates/backgrounds.svg");
        let guidelines = include_str!("templates/guidelines.svg");

        let mut tera = Tera::default();
        let mut context = Context::new();

        let rect = Rect {
            x: 0.0,
            y: 0.0,
            width: self.width,
            height: self.height,
        };
        let svg = self.svg();
        let viewport = self.viewport();
        let origin = self.origin();
        let guides = self.guides();

        tera.add_raw_template("panel", &panel).unwrap();
        tera.add_raw_template("styles", &styles).unwrap();
        tera.add_raw_template("backgrounds", &backgrounds).unwrap();
        tera.add_raw_template("guidelines", &guidelines).unwrap();

        context.insert("panel", &rect);
        context.insert("svg", &svg);
        context.insert("viewport", &viewport);
        context.insert("origin", &origin);
        context.insert("guides", &guides);

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

    fn origin(&self) -> Point {
        let w: f32 = self.width;
        let h: f32 = self.height;

        let x = match self.origin.x.as_ref() {
            "left" => 0.0,
            "right" => w,
            "centre" => w / 2.0,
            "center" => w / 2.0,
            _ => 0.0,
        };

        let y = match self.origin.y.as_ref() {
            "top" => 0.0,
            "middle" => h / 2.0,
            "bottom" => h,
            _ => 0.0,
        };

        return Point { x: x, y: y };
    }

    fn guides(&self) -> Vec<Line> {
        let origin = self.origin();
        let gutter = self.gutter;
        let mut list: Vec<Line> = Vec::new();

        for (k, v) in self.guides.iter() {
            if v.orientation == "vertical" {
                list.push(Line::new(
                    k,
                    origin.x + v.offset,
                    -gutter,
                    origin.x + v.offset,
                    self.height + gutter,
                ));
            } else if v.orientation == "horizontal" {
                list.push(Line::new(
                    k,
                    -gutter,
                    origin.y + v.offset,
                    self.width + gutter,
                    origin.y + v.offset,
                ));
            }
        }

        return list;
    }
}
