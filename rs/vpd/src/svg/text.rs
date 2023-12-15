use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Text {
    pub x: f32,
    pub y: f32,
    pub path: String,
}

impl Text {
    pub fn new(x: f32, y: f32, path: String) -> Text {
        Text {
            x: x,
            y: y,
            path: path,
        }
    }
}
