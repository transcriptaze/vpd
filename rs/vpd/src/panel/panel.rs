use std::collections::HashMap;

use serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use crate::panel::Guide;
use crate::panel::Label;
use crate::svg::GuideLine;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Text;
use crate::svg::SVG;

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
    pub fn to_SVG(&self, theme: &str) -> Result<String, JsValue> {
        let w = self.width + 2.0 * self.gutter;
        let h = self.height + 2.0 * self.gutter;
        let viewport = self.viewport();
        let background = Rect::new(0.0, 0.0, self.width, self.height);
        let outline = Rect::new(0.0, 0.0, self.width, self.height);
        let origin = self.origin();
        let guidelines = self.guidelines();
        let labels = self.labels();

        let svg = SVG::new(w, h, viewport)
            .background(background)
            .outline(outline)
            .origin(origin)
            .guidelines(guidelines)
            .labels(labels);

        match svg.to_SVG(theme) {
            Ok(v) => Ok(v),
            Err(e) => Err(JsValue::from(format!("{}", e))),
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

    fn guidelines(&self) -> Vec<GuideLine> {
        let origin = self.origin();
        let gutter = self.gutter;
        let mut list: Vec<GuideLine> = Vec::new();

        for (k, v) in self.guides.iter() {
            if v.orientation == "vertical" {
                list.push(GuideLine::new(
                    k,
                    origin.x + v.offset,
                    -gutter,
                    origin.x + v.offset,
                    self.height + gutter,
                    "vertical".to_string(),
                ));
            } else if v.orientation == "horizontal" {
                list.push(GuideLine::new(
                    k,
                    -gutter,
                    origin.y + v.offset,
                    self.width + gutter,
                    origin.y + v.offset,
                    "horizontal".to_string(),
                ));
            }
        }

        return list;
    }

    fn labels(&self) -> Vec<Text> {
        let mut list: Vec<Text> = Vec::new();

        for v in self.labels.iter() {
            list.push(Text::new(v.x, v.y, v.path.to_string()));
        }

        return list;
    }
}
