use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Label {
    pub id: String,
    pub text: String,
    pub x: f32,
    pub y: f32,
    pub path: String,
}

impl Label {
    pub fn new(id: &str, text: &str, x: f32, y: f32, path: &str) -> Label {
        Label {
            id: id.to_string(),
            text: text.to_string(),
            x: x,
            y: y,
            path: path.to_string(),
        }
    }
}
