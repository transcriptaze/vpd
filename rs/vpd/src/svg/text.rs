use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Text {
    pub text: String,
    pub x: f32,
    pub y: f32,
    pub path: String,
    pub colour: String,
}

impl Text {
    pub fn new(text: &str, x: f32, y: f32, path: &str, colour: &str) -> Text {
        Text {
            text: text.to_string(),
            x: x,
            y: y,
            path: path.to_string(),
            colour: colour.to_string(),
        }
    }
}
