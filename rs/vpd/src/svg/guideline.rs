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

    pub fn clone(&self, label: &str, offset: f32) -> Option<GuideLine> {
        match self.orientation.as_str() {
            "vertical" => Some(GuideLine {
                label: label.to_string(),
                x1: self.x1 + offset,
                y1: self.y1,
                x2: self.x2 + offset,
                y2: self.y2,
                orientation: self.orientation.to_string(),
            }),

            "horizontal" => Some(GuideLine {
                label: label.to_string(),
                x1: self.x1,
                y1: self.y1 + offset,
                x2: self.x2,
                y2: self.y2 + offset,
                orientation: self.orientation.to_string(),
            }),

            _ => None,
        }
    }
}
