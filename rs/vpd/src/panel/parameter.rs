use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Parameter {
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Parameter {
    pub fn new(name: &str, x: &X, y: &Y, part: &Option<String>) -> Parameter {
        Parameter {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}
