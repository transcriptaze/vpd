use serde::{Deserialize, Serialize};

use crate::panel::Panel;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Anchor {
    pub reference: String,
    pub offset: f32,
}

impl Anchor {
    pub fn resolve(&self, panel: &Panel) -> f32 {
        let w = panel.width;
        let h = panel.height;

        match self.reference.as_str() {
            "absolute" => self.offset,
            "left" => self.offset,
            "centre" => w / 2.0 + self.offset,
            "center" => w / 2.0 + self.offset,
            "right" => w + self.offset,
            "top" => self.offset,
            "middle" => h / 2.0 + self.offset,
            "bottom" => h + self.offset,
            _ => 0.0,
        }
    }
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct X {
    pub reference: String,
    pub offset: f32,
}

impl X {
    pub fn resolve(&self, panel: &Panel) -> f32 {
        let w = panel.width;

        match self.reference.as_str() {
            "absolute" => self.offset,
            "left" => self.offset,
            "centre" => w / 2.0 + self.offset,
            "center" => w / 2.0 + self.offset,
            "right" => w + self.offset,
            _ => 0.0,
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
        let h = panel.height;

        match self.reference.as_str() {
            "absolute" => self.offset,
            "top" => self.offset,
            "middle" => h / 2.0 + self.offset,
            "bottom" => h + self.offset,
            _ => 0.0,
        }
    }
}
