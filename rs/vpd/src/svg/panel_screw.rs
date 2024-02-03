use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Clone)]
pub struct PanelScrew {
    pub x: f32,
    pub y: f32,
}

impl PanelScrew {
    pub fn new(x: f32, y: f32) -> PanelScrew {
        PanelScrew { x: x, y: y }
    }
}
