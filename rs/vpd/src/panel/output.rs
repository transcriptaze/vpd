use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Output {
    pub name: String,
    pub x: X,
    pub y: Y,
}

impl Output {
    pub fn new(name: &str, x: &X, y: &Y) -> Output {
        Output {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
        }
    }
}
