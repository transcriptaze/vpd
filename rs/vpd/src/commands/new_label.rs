use std::error::Error;
use std::future::Future;
use std::pin::Pin;

use wasm_bindgen::prelude::*;

use serde::Deserialize;
use serde_wasm_bindgen;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::XY;

const FONT: &str = "RobotoMono-Bold";
const FONTSIZE: f32 = 12.0;
const LEFT: &str = "left";
const BASELINE: &str = "baseline";
const LIGHT: &str = "#222222";
const DARK: &str = "#ebebeb";

#[wasm_bindgen(raw_module = "../../javascript/api.js")]
extern "C" {
    async fn prepareFont(font: &str);
    fn text2path(text: &str, font: &str, fontsize: f32) -> JsValue;
}

#[derive(Deserialize)]
pub struct NewLabel {
    text: String,
    x: panel::X,
    y: panel::Y,
    offset: Option<panel::Offset>,
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
    fn prepare(&self, _m: &Module) -> Option<Pin<Box<dyn Future<Output = ()>>>> {
        let font = match &self.font {
            Some(v) => v,
            None => FONT,
        };

        Some(Box::pin(prepare((&font).to_string())))
    }

    fn apply(&self, m: &mut Module) {
        let id = m.new_label_id();
        let xy = XY::new(&self.x, &self.y, &self.offset);

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
            &id,
            &self.text,
            &xy,
            font,
            size,
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

async fn prepare(font: String) {
    prepareFont(&font).await;
}
