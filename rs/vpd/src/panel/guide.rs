use serde::{Deserialize, Serialize};

use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;
use crate::svg::GuideLine;

use crate::utils::log;
use crate::warnf;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Guide {
    pub reference: String,
    pub offset: f32,
    pub x: Option<X>,
    pub y: Option<Y>,
}

impl Guide {
    pub fn new(orientation: &str, reference: &str, offset: f32) -> Guide {
        let x = match orientation {
            "vertical" => Some(X::new(reference, offset)),
            _ => None,
        };

        let y = match orientation {
            "horizontal" => Some(Y::new(reference, offset)),
            _ => None,
        };

        Guide {
            reference: reference.to_string(),
            offset: offset,
            x: x,
            y: y,
        }
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, label: &str, panel: &Panel) -> Option<GuideLine> {
        let reference = self.reference.as_str();

        match reference {
            "" => None,

            "absolute" | "origin" => self.to_svg(label, panel, 0),

            "left" | "centre" | "center" | "right" | "top" | "middle" | "bottom" => {
                self.to_svg(label, panel, 0)
            }

            _ => {
                if panel.guides.contains_key(reference) {
                    self.to_svg(label, panel, 0)
                } else {
                    warnf!("missing reference guideline '{}'", reference);
                    None
                }
            }
        }
    }

    fn to_svg(&self, label: &str, panel: &Panel, depth: i32) -> Option<GuideLine> {
        if depth >= panel.guides.len().try_into().unwrap() {
            warnf!("guide circular reference");
            return None;
        }

        let orientation = match (&self.x, &self.y) {
            (Some(_), None) => "vertical",
            (None, Some(_)) => "horizontal",
            (_, _) => "",
        };

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

            (_, _) => self.offset,
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
                width / 2.0 + offset,
                -gutter,
                width / 2.0 + offset,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "center") => Some(GuideLine::new(
                label,
                width / 2.0 + offset,
                -gutter,
                width / 2.0 + offset,
                height + gutter,
                "vertical".to_string(),
            )),

            (_, "right") => Some(GuideLine::new(
                label,
                width + offset,
                -gutter,
                width + offset,
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
                height / 2.0 + offset,
                width + gutter,
                height / 2.0 + offset,
                "horizontal".to_string(),
            )),

            (_, "bottom") => Some(GuideLine::new(
                label,
                -gutter,
                height + offset,
                width + gutter,
                height + offset,
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

            (_, r) => {
                for (k, v) in panel.guides.iter() {
                    if k != label && k == r {
                        return match v.to_svg(k, panel, depth + 1) {
                            Some(g) => g.clone(label, offset),
                            None => None,
                        };
                    }
                }

                None
            }
        }
    }
}
