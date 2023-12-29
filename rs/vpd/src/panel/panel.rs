use regex::Regex;
use std::collections::HashMap;

use serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use crate::panel::Guide;
use crate::panel::Label;
use crate::panel::Origin;
use crate::panel::Parameter;
use crate::svg::Circle;
use crate::svg::GuideLine;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Style;
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
    pub parameters: Vec<Parameter>,
    pub labels: Vec<Label>,
}

impl Panel {
    pub fn new(width: f32, _height: f32) -> Panel {
        let w = (width / H).round();

        return Panel {
            width: w * H,
            height: 128.5,
            gutter: 5.0,
            origin: Origin::new(),
            guides: HashMap::new(),
            parameters: Vec::new(),
            labels: Vec::new(),
        };
    }

    pub fn new_guide_name(&self, orientation: &str, reference: &str) -> String {
        let re = match (orientation, reference) {
            ("vertical", _) => Regex::new(r"(v)(\d+)").unwrap(),
            ("horizontal", _) => Regex::new(r"(h)(\d+)").unwrap(),
            _ => match Regex::new(r"^(.*?)(\d+)$").unwrap().find(reference) {
                Some(_) => Regex::new(r"^(.*?)(\d+)$").unwrap(),
                None => Regex::new(r"(g)(\d+)").unwrap(),
            },
        };

        let mut ix: i32 = 0;

        for k in self.guides.keys() {
            match re.captures(k) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
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
            _ => match re.captures(reference) {
                Some(v) => format!("{}{}", v.get(1).unwrap().as_str(), ix + 1),
                None => format!("g{}", ix + 1),
            },
        }
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, theme: &str) -> Result<String, JsValue> {
        let w = self.width + 2.0 * self.gutter;
        let h = self.height + 2.0 * self.gutter;
        let viewport = self.viewport();
        let styles = self.styles();
        let background = Rect::new(0.0, 0.0, self.width, self.height);
        let outline = Rect::new(0.0, 0.0, self.width, self.height);
        let origin = self.origin();
        let guidelines = self.guidelines();
        let parameters = self.parameters(theme);
        let labels = self.labels(theme);

        let svg = SVG::new(w, h, viewport)
            .styles(styles)
            .background(background)
            .outline(outline)
            .origin(origin)
            .guidelines(guidelines)
            .parameters(parameters)
            .labels(labels);

        match svg.to_SVG(theme) {
            Ok(v) => Ok(v),
            Err(e) => Err(JsValue::from(format!("{}", e))),
        }
    }

    #[allow(non_snake_case)]
    pub fn export_SVG(&self, theme: &str) -> Result<String, JsValue> {
        let w = self.width + 2.0 * self.gutter;
        let h = self.height + 2.0 * self.gutter;
        let viewport = Rect::new(0.0, 0.0, self.width, self.height);
        let background = Rect::new(0.0, 0.0, self.width, self.height);
        let parameters = self.parameters(theme);
        let labels = self.labels(theme);

        let svg = SVG::new(w, h, viewport)
            .background(background)
            .parameters(parameters)
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

    fn styles(&self) -> Vec<Style> {
        return Vec::new();
    }

    pub fn origin(&self) -> Point {
        self.origin.to_point(&self)
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

    fn parameters(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#ff0000";

        for v in self.parameters.iter() {
            list.push(Circle::new(v.x, v.y, radius, &colour));
        }

        return list;
    }

    fn labels(&self, theme: &str) -> Vec<Text> {
        let mut list: Vec<Text> = Vec::new();
        let mut colour = "#222222";

        if theme == "dark" {
            colour = "#ebebeb";
        }

        for v in self.labels.iter() {
            list.push(Text::new(v.x, v.y, v.path.to_string(), colour.to_string()));
        }

        return list;
    }
}
