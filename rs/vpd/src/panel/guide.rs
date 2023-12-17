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
            (_, "left") => self.offset,
            (_, "centre") => self.offset,
            (_, "center") => self.offset,
            (_, "right") => self.offset,
            (_, "top") => self.offset,
            (_, "middle") => self.offset,
            (_, "bottom") => self.offset,

            ("vertical", "absolute") => self.offset,
            ("vertical", "origin") => origin.x + self.offset,

            ("horizontal", "absolute") => self.offset,
            ("horizontal", "origin") => origin.y + self.offset,

            (_, _) => 0.0,
        };

        match (orientation, reference) {
            (_, "left") => Some(GuideLine::new(
                label,
                offset,
                -gutter,
                offset,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "centre") => Some(GuideLine::new(
                label,
                width / 2.0,
                -gutter,
                width / 2.0,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "center") => Some(GuideLine::new(
                label,
                width / 2.0,
                -gutter,
                width / 2.0,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "right") => Some(GuideLine::new(
                label,
                width,
                -gutter,
                width,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "top") => Some(GuideLine::new(
                label,
                -gutter,
                offset,
                width + gutter,
                offset,
                "horizontal".to_string(),
            )),

            (_, "middle") => Some(GuideLine::new(
                label,
                -gutter,
                height / 2.0,
                width + gutter,
                height / 2.0,
                "horizontal".to_string(),
            )),

            (_, "bottom") => Some(GuideLine::new(
                label,
                -gutter,
                height,
                width + gutter,
                height,
                "horizontal".to_string(),
            )),

            ("vertical", _) => Some(GuideLine::new(
                label,
                offset,
                -gutter,
                offset,
                height + gutter,
                "vertical".to_string(),
            )),

            ("horizontal", _) => Some(GuideLine::new(
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
