use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Circle {
    pub name: String,
    pub x: f32,
    pub y: f32,
    pub r: f32,
    pub colour: String,
}

impl Circle {
    pub fn new(name: &str, x: f32, y: f32, r: f32, colour: &str) -> Circle {
        Circle {
            name: name.to_string(),
            x: x,
            y: y,
            r: r,
            colour: colour.to_string(),
        }
    }
}
