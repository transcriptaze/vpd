use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Output {
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Output {
    pub fn new(name: &str, x: &X, y: &Y, part: &Option<String>) -> Output {
        Output {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}
