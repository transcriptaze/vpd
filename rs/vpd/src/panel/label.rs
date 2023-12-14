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
    pub fn new(id: String, text: String, x: f32, y: f32, path: String) -> Label {
        Label {
            id: id,
            text: text,
            x: x,
            y: y,
            path: path,
        }
    }
}
