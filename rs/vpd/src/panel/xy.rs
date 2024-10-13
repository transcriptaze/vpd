use serde::{Deserialize, Deserializer, Serialize};

use crate::panel::Panel;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Clone, Debug)]
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
    pub angle: f32,
    pub radius: f32,
}

impl XY {
    pub fn new(x: &X, y: &Y, offset: &Option<Offset>) -> XY {
        XY {
            x: X::new_with_offset(x.reference.as_str(), x.offset, &offset),
            y: Y::new_with_offset(y.reference.as_str(), y.offset, &offset),
            offset: offset.clone(),
        }
    }

    pub fn new_without_offset(x: X, y: Y) -> XY {
        XY {
            x: x,
            y: y,
            offset: None,
        }
    }

    pub fn set_x(&mut self, x: &X) {
        self.x = x.clone();
    }

    pub fn set_y(&mut self, y: &Y) {
        self.y = y.clone();
    }

    pub fn set_offset(&mut self, offset: &Option<Offset>) {
        self.x = X::new_with_offset(self.x.reference.as_str(), self.x.offset, offset);
        self.y = Y::new_with_offset(self.y.reference.as_str(), self.y.offset, offset);
        self.offset = offset.clone();
    }
}

impl<'de> Deserialize<'de> for XY {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _XY {
            V0 { x: X, y: Y, offset: Option<Offset> },
        }

        let xy = _XY::deserialize(deserializer)?;

        match xy {
            #[rustfmt::skip]
            _XY::V0 {x,y,offset } => {
                Ok(XY::new(&x,&y,&offset))
            },
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
                Some(e) => (Some(e.x()), Some(e.y())),
                None => (None, None),
            }
        }

        "output" => {
            let mut it = panel.outputs.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x()), Some(e.y())),
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
                Some(e) => (Some(e.x()), Some(e.y())),
                None => (None, None),
            }
        }

        "widget" => {
            let mut it = panel.widgets.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x()), Some(e.y())),
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
