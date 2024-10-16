use std::f32::consts::PI;

use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IWidget;
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
        let mut dx: f32 = 0.0;
        let mut dy: f32 = 0.0;

        if let Some(v) = offset {
            let angle = v.angle;
            let radius = v.radius;

            dx = radius * (angle * PI / 180.0).cos();
            dy = radius * (angle * PI / 180.0).sin();
        }

        XY {
            x: X::new(x.reference.as_str(), x.offset, dx),
            y: Y::new(y.reference.as_str(), y.offset, dy),
            offset: offset.clone(),
        }
    }

    pub fn set_x(&mut self, x: &X) {
        self.x.reference = x.reference.clone();
        self.x.offset = x.offset;
    }

    pub fn set_y(&mut self, y: &Y) {
        self.y.reference = y.reference.clone();
        self.y.offset = y.offset;
    }

    pub fn set_offset(&mut self, offset: &Option<Offset>) {
        let mut dx: f32 = 0.0;
        let mut dy: f32 = 0.0;

        if let Some(v) = offset {
            let angle = v.angle;
            let radius = v.radius;

            dx = radius * (angle * PI / 180.0).cos();
            dy = radius * (angle * PI / 180.0).sin();
        }

        self.x = X::new(self.x.reference.as_str(), self.x.offset, dx);
        self.y = Y::new(self.y.reference.as_str(), self.y.offset, dy);
        self.offset = offset.clone();
    }

    pub fn as_tuple(&self) -> (Option<X>, Option<Y>) {
        (Some(self.x.clone()), Some(self.y.clone()))
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
            _XY::V0 { x, y, offset } => {
                let mut dx: f32 = 0.0;
                let mut dy: f32 = 0.0;

                if let Some(v) = offset.clone() {
                    let angle = v.angle;
                    let radius = v.radius;

                    dx = radius * (angle * PI / 180.0).cos();
                    dy = radius * (angle * PI / 180.0).sin();
                }

                let _x = X::new(&x.reference, x.offset, dx);
                let _y = Y::new(&y.reference, y.offset, dy);

                Ok(XY::new(&_x, &_y, &offset))
            }
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
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        "output" => {
            let mut it = panel.outputs.iter();
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        "parameter" => {
            let mut it = panel.parameters.iter();
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        "light" => {
            let mut it = panel.lights.iter();
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        "widget" => {
            let mut it = panel.widgets.iter();
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        "label" => {
            let mut it = panel.labels.iter();
            match it.find(|&v| v.is(reference) || v.named(reference)) {
                Some(e) => e.xy().as_tuple(),
                None => (None, None),
            }
        }

        _ => (None, None),
    }
}
