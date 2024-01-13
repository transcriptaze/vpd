use std::error::Error;

use serde::Deserialize;

use serde_wasm_bindgen;
use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

const FONT: &str = "RobotoMono-Bold";
const FONTSIZE: f32 = 12.0;
const LEFT: &str = "left";
const BASELINE: &str = "baseline";
const LIGHT: &str = "#222222";
const DARK: &str = "#ebebeb";

#[wasm_bindgen(raw_module = "../../javascript/text.js")]
extern "C" {
    fn text2path(text: &str, font: &str, fontsize: f32) -> JsValue;
}

#[derive(Deserialize)]
pub struct NewLabel {
    text: String,
    x: panel::X,
    y: panel::Y,
    font: Option<String>,
    fontsize: Option<f32>,
    halign: Option<String>,
    valign: Option<String>,
    colour: Option<Colour>,
}

#[derive(Deserialize)]
struct Object {
    label: NewLabel,
}

#[derive(Deserialize)]
struct Colour {
    pub light: String,
    pub dark: Option<String>,
}

#[derive(Deserialize)]
struct Path {
    pub path: String,
    pub bounds: BoundingBox,
    pub ascender: f32,
    pub descender: f32,
    pub advance: f32,
}

#[derive(Deserialize)]
struct BoundingBox {
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
}

impl NewLabel {
    pub fn new(json: &str) -> Result<NewLabel, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.label)
    }
}

impl Command for NewLabel {
    fn apply(&self, m: &mut Module) -> bool {
        let font = match &self.font {
            Some(v) => v,
            None => FONT,
        };

        let size = match self.fontsize {
            Some(v) => v,
            None => FONTSIZE,
        };

        let halign = match &self.halign {
            Some(v) => v,
            None => LEFT,
        };

        let valign = match &self.valign {
            Some(v) => v,
            None => BASELINE,
        };

        let colour = match &self.colour {
            Some(v) => v.to_colour(),
            _ => panel::Colour::new(LIGHT, DARK),
        };

        let result = text2path(&self.text, font, size);
        let path: Path = serde_wasm_bindgen::from_value(result).unwrap();

        m.panel.labels.push(panel::Label::new(
            &self.text,
            &self.x,
            &self.y,
            halign,
            valign,
            &panel::Path::new(
                &path.path,
                &path.bounds.to_bounds(),
                path.ascender,
                path.descender,
                path.advance,
            ),
            &colour,
        ));

        true
    }
}

impl BoundingBox {
    pub fn to_bounds(&self) -> panel::Bounds {
        panel::Bounds {
            x1: self.x1,
            y1: self.y1,
            x2: self.x2,
            y2: self.y2,
        }
    }
}

impl Colour {
    pub fn to_colour(&self) -> panel::Colour {
        match &self.dark {
            Some(v) => panel::Colour::new(&self.light, &v),
            _ => panel::Colour::new(&self.light, &self.light),
        }
    }
}
