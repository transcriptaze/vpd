use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
pub struct GuideLine {
    pub label: String,
    pub x1: f32,
    pub y1: f32,
    pub x2: f32,
    pub y2: f32,
    pub orientation: String,
}

impl GuideLine {
    pub fn new(label: &str, x1: f32, y1: f32, x2: f32, y2: f32, orientation: String) -> GuideLine {
        return GuideLine {
            label: label.to_string(),
            x1: x1,
            y1: y1,
            x2: x2,
            y2: y2,
            orientation: orientation.to_string(),
        };
    }
}
