use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Light {
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Light {
    pub fn new(name: &str, x: &X, y: &Y, part: &Option<String>) -> Light {
        Light {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}
