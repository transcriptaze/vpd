use serde::{Deserialize, Serialize};

use crate::panel::Guide;
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
            "left" => self.offset,
            "centre" => w / 2.0 + self.offset,
            "center" => w / 2.0 + self.offset,
            "right" => w + self.offset,

            _ => match panel.guides.get(reference) {
                Some(g) => match g.resolve(reference, &panel, 0) {
                    Some((orientation, offset)) => {
                        if orientation.as_str() == "vertical" {
                            self.offset + offset
                        } else {
                            0.0
                        }
                    }
                    None => 0.0,
                },
                None => {
                    warnf!("missing reference guideline '{}'", reference);
                    0.0
                }
            },
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
            "top" => self.offset,
            "middle" => h / 2.0 + self.offset,
            "bottom" => h + self.offset,

            _ => match panel.guides.get(reference) {
                Some(g) => match g.resolve(reference, &panel, 0) {
                    Some((orientation, offset)) => {
                        if orientation.as_str() == "horizontal" {
                            self.offset + offset
                        } else {
                            0.0
                        }
                    }
                    None => 0.0,
                },
                None => {
                    warnf!("missing reference guideline '{}'", reference);
                    0.0
                }
            },
        }
    }
}
