use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Part {
    pub name: String,
    pub x: f32,
    pub y: f32,
}

impl Part {
    pub fn new(name: &str, x: f32, y: f32) -> Part {
        Part {
            name: name.to_string(),
            x: x,
            y: y,
        }
    }
}
