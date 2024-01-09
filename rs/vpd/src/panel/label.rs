use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Label {
    pub text: String,
    pub x: X,
    pub y: Y,
    pub path: String,
}

impl Label {
    pub fn new(text: &str, x: &X, y: &Y, path: &str) -> Label {
        Label {
            text: text.to_string(),
            x: x.clone(),
            y: y.clone(),
            path: path.to_string(),
        }
    }
}
