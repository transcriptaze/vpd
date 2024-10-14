use std::f32::consts::PI;

use regex::Regex;
use serde::{Deserialize, Deserializer, Serialize};
use std::fmt;

use crate::panel::xy;
use crate::panel::Offset;
use crate::panel::Panel;

use crate::utils::log;
use crate::warnf;

#[derive(Serialize, Clone, Debug)]
pub struct Y {
    pub reference: String,
    pub offset: f32,
    pub angle: f32,
    pub radius: f32,

    #[serde(skip_serializing, skip_deserializing)]
    pub _offset: f32,
}

impl Y {
    pub fn new(reference: &str, dy: f32) -> Y {
        Y {
            reference: reference.to_string(),
            offset: dy,
            angle: 0.0,
            radius: 0.0,
            _offset: dy,
        }
    }

    pub fn new_with_offset(reference: &str, dy: f32, offset: &Option<Offset>) -> Y {
        let mut angle: f32 = 0.0;
        let mut radius: f32 = 0.0;

        if let Some(v) = offset {
            angle = v.angle;
            radius = v.radius;
        }

        let dr = radius * (angle * PI / 180.0).sin();

        Y {
            reference: reference.to_string(),
            offset: dy,
            angle: angle,
            radius: radius,

            _offset: dy - dr,
        }
    }

    pub fn set_offset(&mut self, offset: f32) {
        let dr = self.radius * (self.angle * PI / 180.0).sin();

        self.offset = offset;
        self._offset = offset - dr;
    }

    pub fn resolve(&self, panel: &Panel) -> f32 {
        match self._resolve(panel, Vec::new()) {
            Some(v) => v,
            None => 0.0,
        }
    }

    fn _resolve<'a>(&'a self, panel: &Panel, mut stack: Vec<&'a str>) -> Option<f32> {
        let reference = self.reference.as_str();
        let h = panel.height;

        if stack.contains(&reference) {
            warnf!("resolve(Y): circular reference {}", reference);
            return None;
        }

        if stack.len() > 25 {
            warnf!("resolve(Y): recursion depth exceeded");
            return None;
        }

        stack.push(reference);

        match self.reference.as_str() {
            "absolute" => Some(self._offset),
            "origin" => Some(panel.origin.resolve(panel).1 + self._offset),
            "H0" => Some(panel.origin.resolve(panel).1 + self._offset),
            "top" => Some(self._offset),
            "middle" => Some(h / 2.0 + self._offset),
            "bottom" => Some(h + self._offset),

            _ => {
                let re = Regex::new(r"(input|output|parameter|light|widget|label)<(.*?)>").unwrap();

                match re.captures(reference) {
                    // ... component reference?
                    Some(captures) => {
                        let itype = captures.get(1).unwrap().as_str();
                        let id = captures.get(2).unwrap().as_str();

                        match xy::find(panel, itype, id) {
                            (_, Some(y)) => match y._resolve(panel, stack) {
                                Some(v) => Some(v + self._offset),
                                None => None,
                            },
                            (_, _) => None,
                        }
                    }

                    // ... guideline?
                    None => match panel.guides.get(reference) {
                        Some(g) => match &g.y {
                            Some(y) => match y._resolve(panel, stack) {
                                Some(v) => Some(v + self._offset),
                                None => None,
                            },
                            None => None,
                        },
                        None => None,
                    },
                }
            }
        }
    }
}

impl fmt::Display for Y {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match (self.reference.as_str(), &self.offset) {
            ("absolute", dy) => write!(f, "@{}mm", dy),
            ("origin", dy) => write!(f, "{}mm", dy),
            (_, 0.0) => write!(f, "{}", &self.reference),
            (_, dy) => write!(f, "{}  {}mm", &self.reference, dy),
        }
    }
}

impl<'de> Deserialize<'de> for Y {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        struct _Y {
            reference: String,
            offset: f32,
            angle: Option<f32>,
            radius: Option<f32>,
        }

        let y = _Y::deserialize(deserializer)?;
        let mut angle: f32 = 0.0;
        let mut radius: f32 = 0.0;

        if let Some(v) = y.angle {
            angle = v;
        }

        if let Some(v) = y.radius {
            radius = v;
        }

        let dr = radius * (angle * PI / 180.0).sin();

        Ok(Y {
            reference: y.reference.trim().to_string(),
            offset: y.offset,
            angle: angle,
            radius: radius,
            _offset: y.offset - dr,
        })
    }
}
