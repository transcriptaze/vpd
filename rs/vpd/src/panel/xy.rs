use serde::{Deserialize, Serialize};

use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct XY {
    pub x: X,
    pub y: Y,

    #[serde(skip_serializing_if = "no_use_to_man_or_beast")]
    pub offset: Option<Offset>,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Polar {
    pub angle: f32,
    pub radius: f32,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Offset {
    // pub dx: f32,
    // pub dy: f32,
    pub angle: f32,
    pub radius: f32,
}

impl XY {
    pub fn new(x: X, y: Y, offset: Option<Offset>) -> XY {
        XY {
            x: x.clone(),
            y: y.clone(),
            offset: offset.clone(),
        }
    }
}

impl Polar {
    pub fn _new(angle: Option<f32>, radius: Option<f32>) -> Polar {
        match (angle, radius) {
            (Some(a), Some(r)) => Polar {
                angle: a,
                radius: r,
            },

            _ => Polar {
                angle: 0.0,
                radius: 0.0,
            },
        }
    }
}

pub fn no_use_to_man_or_beast(offset: &Option<Offset>) -> bool {
    if let Some(o) = offset {
        if o.radius <= 0.0 {
            return true;
        }
    }

    return false;
}

pub fn find(panel: &Panel, itype: &str, reference: &str) -> (Option<X>, Option<Y>) {
    match itype {
        "input" => {
            let mut it = panel.inputs.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "output" => {
            let mut it = panel.outputs.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "parameter" => {
            let mut it = panel.parameters.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x()), Some(e.y())),
                None => (None, None),
            }
        }

        "light" => {
            let mut it = panel.lights.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "widget" => {
            let mut it = panel.widgets.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "label" => {
            let mut it = panel.labels.iter();
            match it.find(|&v| v.id == reference || v.text == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        _ => (None, None),
    }
}
