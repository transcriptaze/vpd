use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Parameter {
    pub name: String,
    pub x: X,
    pub y: Y,
}

impl Parameter {
    pub fn new(name: &str, x: &X, y: &Y) -> Parameter {
        Parameter {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
        }
    }
}
