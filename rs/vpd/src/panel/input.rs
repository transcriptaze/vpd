use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Input {
    pub name: String,
    pub x: X,
    pub y: Y,
}

impl Input {
    pub fn new(name: &str, x: &X, y: &Y) -> Input {
        Input {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
        }
    }
}
