use serde::{Deserialize, Serialize};

use crate::panel::Panel;
use crate::svg::GuideLine;

#[derive(Serialize, Deserialize)]
pub struct Guide {
    pub orientation: String,
    pub reference: String,
    pub offset: f32,
}

impl Guide {
    pub fn new(orientation: &str, reference: &str, offset: f32) -> Guide {
        Guide {
            orientation: orientation.to_string(),
            reference: reference.to_string(),
            offset: offset,
        }
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, label: &str, panel: &Panel) -> Option<GuideLine> {
        let orientation = self.orientation.as_str();
        let reference = self.reference.as_str();

        let origin = panel.origin();
        let width = panel.width;
        let height = panel.height;
        let gutter = panel.gutter;

        let offset = match (orientation, reference) {
            ("vertical", "absolute") => self.offset,
            ("vertical", "origin") => origin.x + self.offset,

            ("horizontal", "absolute") => self.offset,
            ("horizontal", "origin") => origin.y + self.offset,

            (_, _) => 0.0,
        };

        match orientation {
            "vertical" => Some(GuideLine::new(
                label,
                offset,
                -gutter,
                offset,
                height + gutter,
                "vertical".to_string(),
            )),

            "horizontal" => Some(GuideLine::new(
                label,
                -gutter,
                offset,
                width + gutter,
                offset,
                "horizontal".to_string(),
            )),

            _ => None,
        }
    }
}
