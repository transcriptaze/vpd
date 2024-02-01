use serde::{Deserialize, Serialize};
use std::collections::HashMap;

use crate::module::IItem;
use crate::module::Item;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Label {
    pub id: String,
    pub text: String,
    pub x: X,
    pub y: Y,
    pub halign: String,
    pub valign: String,
    pub path: Path,
    pub colour: Colour,
}

#[derive(Serialize, Deserialize, Clone)]
pub struct Path {
    pub path: String,
    pub bounds: Bounds,
    pub ascender: f32,
    pub descender: f32,
    pub advance: f32,
}

#[derive(Serialize, Deserialize, Clone)]
pub struct Bounds {
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
}

#[derive(Serialize, Deserialize, Clone)]
pub struct Colour {
    pub light: String,
    pub dark: String,
}

impl Label {
    pub fn new(
        id: &str,
        text: &str,
        x: &X,
        y: &Y,
        halign: &str,
        valign: &str,
        path: &Path,
        colour: &Colour,
    ) -> Label {
        Label {
            id: id.to_string(),
            text: text.to_string(),
            x: x.clone(),
            y: y.clone(),
            halign: halign.to_string(),
            valign: valign.to_string(),
            path: path.clone(),
            colour: colour.clone(),
        }
    }
}

impl IItem for Label {
    fn as_item(&self) -> Item {
        Item {
            itype: "label".to_string(),
            id: self.id.clone(),
            name: self.text.clone(),
            attributes: HashMap::new(),
        }
    }
}

impl Path {
    pub fn new(path: &str, bounds: &Bounds, ascender: f32, descender: f32, advance: f32) -> Path {
        Path {
            path: path.to_string(),
            bounds: bounds.clone(),
            ascender: ascender,
            descender: descender,
            advance: advance,
        }
    }
}

impl Colour {
    pub fn new(light: &str, dark: &str) -> Colour {
        Colour {
            light: light.to_string(),
            dark: dark.to_string(),
        }
    }
}
