use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Text {
    pub x: f32,
    pub y: f32,
    pub path: String,
    pub colour: String,
}

impl Text {
    pub fn new(x: f32, y: f32, path: String, colour: String) -> Text {
        Text {
            x: x,
            y: y,
            path: path,
            colour: colour,
        }
    }
}
