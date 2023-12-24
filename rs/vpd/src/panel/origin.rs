use serde::{Deserialize, Serialize};

use crate::panel::Panel;
use crate::svg::Point;

#[derive(Serialize, Deserialize, Debug)]
pub struct Origin {
    pub x: XY,
    pub y: XY,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct XY {
    pub reference: String,
    pub offset: f32,
}

impl Origin {
    pub fn new() -> Origin {
        return Origin {
            x: XY {
                reference: "left".to_string(),
                offset: 0.0,
            },
            y: XY {
                reference: "top".to_string(),
                offset: 0.0,
            },
        };
    }

    pub fn set_x(&mut self, reference: &str, offset: f32) {
        self.x.reference = reference.to_string();
        self.x.offset = offset;
    }

    pub fn set_y(&mut self, reference: &str, offset: f32) {
        self.y.reference = reference.to_string();
        self.y.offset = offset;
    }

    pub fn to_point(&self, panel: &Panel) -> Point {
        let w: f32 = panel.width;
        let h: f32 = panel.height;

        let x = match self.x.reference.as_ref() {
            "left" => 0.0,
            "right" => w,
            "centre" => w / 2.0,
            "center" => w / 2.0,
            "absolute" => self.x.offset,
            _ => 0.0,
        };

        let y = match self.y.reference.as_ref() {
            "top" => 0.0,
            "middle" => h / 2.0,
            "bottom" => h,
            "absolute" => self.y.offset,
            _ => 0.0,
        };

        Point { x: x, y: y }
    }
}
