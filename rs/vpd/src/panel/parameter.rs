use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Parameter {
    pub name: String,
    pub x: f32,
    pub y: f32,
}

impl Parameter {
    pub fn new(name: &str, x: f32, y: f32) -> Parameter {
        Parameter {
            name: name.to_string(),
            x: x,
            y: y,
        }
    }
}
