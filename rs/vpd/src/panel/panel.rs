use regex::Regex;
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
    pub width: f32,
    pub height: f32,
    pub gutter: f32,
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

    pub fn new_guide_name(&self, orientation: &str) -> String {
        let re = match orientation {
            "vertical" => Regex::new(r"v(\d+)").unwrap(),
            "horizontal" => Regex::new(r"h(\d+)").unwrap(),
            _ => Regex::new(r"g(\d+)").unwrap(),
        };

        let mut ix: i32 = 0;

        for k in self.guides.keys() {
            match re.captures(k) {
                Some(captures) => {
                    let v = captures.get(1).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        match orientation {
            "vertical" => format!("v{}", ix + 1),
            "horizontal" => format!("h{}", ix + 1),
            _ => format!("g{}", ix + 1),
        }
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

    pub fn origin(&self) -> Point {
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
        let mut list: Vec<GuideLine> = Vec::new();

        for (k, v) in self.guides.iter() {
            match v.to_SVG(k, self) {
                Some(g) => list.push(g),
                _ => {}
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
