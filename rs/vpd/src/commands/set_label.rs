use serde::Deserialize;
use std::error::Error;
use std::future::Future;
use std::pin::Pin;

use wasm_bindgen::prelude::*;

use crate::command::Command;
use crate::module::ISet;
use crate::module::Module;
use crate::panel;

#[wasm_bindgen(raw_module = "../../javascript/api.js")]
extern "C" {
    async fn prepareFont(font: &str);
    fn text2path(text: &str, font: &str, fontsize: f32) -> JsValue;
}

#[derive(Deserialize, Debug)]
pub struct SetLabel {
    id: String,
    text: Option<String>,
    x: Option<panel::X>,
    y: Option<panel::Y>,
    offset: Option<panel::Offset>,
    font: Option<String>,
    fontsize: Option<f32>,
    halign: Option<String>,
    valign: Option<String>,
    colour: Option<Colour>,
}

#[derive(Deserialize)]
struct Object {
    label: SetLabel,
}

#[derive(Deserialize, Debug)]
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

impl SetLabel {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.label)
    }
}

impl Command for SetLabel {
    fn prepare(&self, m: &Module) -> Option<Pin<Box<dyn Future<Output = ()>>>> {
        if let Some(font) = &self.font {
            Some(Box::pin(prepare((&font).to_string())))
        } else if let Some(ix) = m.find_label(&self.id) {
            let font = &m.panel.labels[ix].font;
            Some(Box::pin(prepare((&font).to_string())))
        } else {
            None
        }
    }

    fn apply(&self, m: &mut Module) {
        if let Some(ix) = m.find_label(&self.id) {
            if let Some(text) = &self.text {
                let old = m.panel.labels[ix].text.clone();
                let font = &m.panel.labels[ix].font;
                let size = m.panel.labels[ix].fontsize;
                let result = text2path(&text, font, size);
                let path: Path = serde_wasm_bindgen::from_value(result).unwrap();

                m.panel.labels[ix].text = text.clone();
                m.panel.labels[ix].path = panel::Path::new(
                    &path.path,
                    &path.bounds.to_bounds(),
                    path.ascender,
                    path.descender,
                    path.advance,
                );

                m.migrate("label", &old, text);
            }

            if let Some(x) = &self.x {
                m.panel.labels[ix].x = x.clone();
            }

            if let Some(y) = &self.y {
                m.panel.labels[ix].y = y.clone();
            }

            if let Some(_) = &self.offset {
                let l = &mut m.panel.labels[ix];

                l.set_offset(&self.offset);
            }

            if let Some(font) = &self.font {
                let text = &m.panel.labels[ix].text;
                let size = m.panel.labels[ix].fontsize;
                let result = text2path(&text, font, size);
                let path: Path = serde_wasm_bindgen::from_value(result).unwrap();

                m.panel.labels[ix].font = font.to_string();
                m.panel.labels[ix].path = panel::Path::new(
                    &path.path,
                    &path.bounds.to_bounds(),
                    path.ascender,
                    path.descender,
                    path.advance,
                )
            }

            if let Some(fontsize) = self.fontsize {
                let text = &m.panel.labels[ix].text;
                let font = &m.panel.labels[ix].font;
                let result = text2path(&text, &font, fontsize);
                let path: Path = serde_wasm_bindgen::from_value(result).unwrap();

                m.panel.labels[ix].fontsize = fontsize;
                m.panel.labels[ix].path = panel::Path::new(
                    &path.path,
                    &path.bounds.to_bounds(),
                    path.ascender,
                    path.descender,
                    path.advance,
                )
            }

            if let Some(halign) = &self.halign {
                m.panel.labels[ix].halign = halign.clone();
            }

            if let Some(valign) = &self.valign {
                m.panel.labels[ix].valign = valign.clone();
            }

            if let Some(colour) = &self.colour {
                m.panel.labels[ix].colour = colour.to_colour();
            }
        }
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
