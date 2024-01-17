use regex::Regex;
use serde::{Deserialize, Serialize};

use crate::panel::Panel;

use crate::utils::log;
use crate::warnf;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct X {
    pub reference: String,
    pub offset: f32,
}

impl X {
    pub fn resolve(&self, panel: &Panel) -> f32 {
        let reference = self.reference.as_str();
        let w = panel.width;

        match reference {
            "absolute" => self.offset,
            "origin" => panel.origin.resolve(panel).0 + self.offset,
            "left" => self.offset,
            "centre" => w / 2.0 + self.offset,
            "center" => w / 2.0 + self.offset,
            "right" => w + self.offset,

            _ => match resolve_x(panel, reference) {
                Some(v) => self.offset + v,
                None => {
                    warnf!("missing reference  '{}'", reference);
                    0.0
                }
            }
        }
    }
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Y {
    pub reference: String,
    pub offset: f32,
}

impl Y {
    pub fn resolve(&self, panel: &Panel) -> f32 {
        let reference = self.reference.as_str();
        let h = panel.height;

        match self.reference.as_str() {
            "absolute" => self.offset,
            "origin" => panel.origin.resolve(panel).1 + self.offset,
            "top" => self.offset,
            "middle" => h / 2.0 + self.offset,
            "bottom" => h + self.offset,

            _ => match resolve_y(panel, reference) {
                Some(v) => self.offset + v,
                None => {
                    warnf!("missing reference  '{}'", reference);
                    0.0
                }
            }
        }
    }
}

fn resolve_x(panel: &Panel, reference: &str) -> Option<f32> {
    match panel.guides.get(reference) {
        Some(g) => match g.resolve(reference, &panel, 0) {
            Some((orientation, offset)) => {
                if orientation.as_str() == "vertical" {
                    Some(offset)
                } else {
                    None
                }
            }
            None => None,
        },

        None => {
            let re = Regex::new(r"(input)<(.*?)>").unwrap();
            return match re.captures(reference) {
                Some(captures) => resolve_input_x(panel, captures.get(2).unwrap().as_str()),
                None => None,
            };
        }
    }
}

fn resolve_y(panel: &Panel, reference: &str) -> Option<f32> {
    match panel.guides.get(reference) {
        Some(g) => match g.resolve(reference, &panel, 0) {
            Some((orientation, offset)) => {
                if orientation.as_str() == "horizontal" {
                    Some(offset)
                } else {
                    None
                }
            }
            None => None,
        },

        None => {
            let re = Regex::new(r"(input)<(.*?)>").unwrap();
            return match re.captures(reference) {
                Some(captures) => resolve_input_y(panel, captures.get(2).unwrap().as_str()),
                None => None,
            };
        }
    }
}

fn resolve_input_x(panel: &Panel, reference: &str) -> Option<f32> {
    for v in &panel.inputs {
        if v.id == reference || v.name == reference {
            return Some(v.x.resolve(panel));
        }
    }

    None
}

fn resolve_input_y(panel: &Panel, reference: &str) -> Option<f32> {
    for v in &panel.inputs {
        if v.id == reference || v.name == reference {
            return Some(v.y.resolve(panel));
        }
    }

    None
}
