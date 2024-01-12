use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Label {
    pub text: String,
    pub x: X,
    pub y: Y,
    pub halign: String,
    pub path: String,
    pub bounds: Bounds,
    pub advance: f32,
}

#[derive(Serialize, Deserialize, Clone)]
pub struct Bounds {
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
}

impl Label {
    pub fn new(
        text: &str,
        x: &X,
        y: &Y,
        halign: &str,
        path: &str,
        bounds: &Bounds,
        advance: f32,
    ) -> Label {
        Label {
            text: text.to_string(),
            x: x.clone(),
            y: y.clone(),
            halign: halign.to_string(),
            path: path.to_string(),
            bounds: bounds.clone(),
            advance: advance,
        }
    }
}
