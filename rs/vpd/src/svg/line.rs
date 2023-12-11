use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Line {
    pub label: String,
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
    pub orientation: String,
}

impl Line {
    pub fn new(label: &str, x1: f32, y1: f32, x2: f32, y2: f32) -> Line {
        return Line {
            label: label.to_string(),
            x1: x1,
            y1: y1,
            x2: x2,
            y2: y2,
            orientation: orientation(x1, y1, x2, y2),
        };
    }
}

fn orientation(x1: f32, y1: f32, x2: f32, y2: f32) -> String {
    if x1 == x2 && y1 != y2 {
        "vertical".to_string()
    } else if x1 != x2 && y1 == y2 {
        "horizontal".to_string()
    } else {
        "".to_string()
    }
}
