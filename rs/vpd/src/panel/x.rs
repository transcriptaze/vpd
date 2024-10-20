use regex::Regex;
use serde::{Deserialize, Deserializer, Serialize};
use std::fmt;

use crate::panel::xy;
use crate::panel::Panel;

use crate::utils::log;
use crate::warnf;

#[derive(Serialize, Clone, Debug)]
pub struct X {
    pub reference: String,
    pub offset: f32,

    #[serde(skip_serializing, skip_deserializing)]
    pub _dr: f32,

    #[serde(skip_serializing, skip_deserializing)]
    pub _offset: f32,
}

impl X {
    pub fn new(reference: &str, dx: f32, dr: f32) -> X {
        X {
            reference: reference.to_string(),
            offset: dx,
            _dr: dr,
            _offset: dx + dr,
        }
    }

    pub fn set_offset(&mut self, offset: f32) {
        self.offset = offset;
        self._offset = offset + self._dr;
    }

    pub fn resolve(&self, panel: &Panel) -> f32 {
        match self._resolve(panel, Vec::new()) {
            Some(v) => v,
            None => 0.0,
        }
    }

    fn _resolve<'a>(&'a self, panel: &Panel, mut stack: Vec<&'a str>) -> Option<f32> {
        let reference = self.reference.as_str();
        let w = panel.width;

        if stack.contains(&reference) {
            warnf!("resolve(X): circular reference {}", reference);
            return None;
        }

        if stack.len() > 25 {
            warnf!("resolve(X): recursion depth exceeded");
            return None;
        }

        stack.push(reference);

        match reference {
            "absolute" => Some(self._offset),
            "origin" => Some(panel.origin.resolve(panel).0 + self._offset),
            "V0" => Some(panel.origin.resolve(panel).0 + self._offset),
            "left" => Some(self._offset),
            "centre" => Some(w / 2.0 + self._offset),
            "center" => Some(w / 2.0 + self._offset),
            "right" => Some(w + self._offset),

            _ => {
                let re = Regex::new(r"(input|output|parameter|light|widget|label)<(.*?)>").unwrap();

                match re.captures(reference) {
                    // ... component reference?
                    Some(captures) => {
                        let itype = captures.get(1).unwrap().as_str();
                        let id = captures.get(2).unwrap().as_str();

                        match xy::find(panel, itype, id) {
                            (Some(x), _) => match x._resolve(panel, stack) {
                                Some(v) => Some(v + self._offset),
                                None => None,
                            },
                            (_, _) => None,
                        }
                    }

                    // ... guideline?
                    None => match panel.guides.get(reference) {
                        Some(g) => match &g.x {
                            Some(x) => match x._resolve(panel, stack) {
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

impl fmt::Display for X {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match (self.reference.as_str(), &self.offset) {
            ("absolute", dx) => write!(f, "@{}mm", dx),
            ("origin", dx) => write!(f, "{}mm", dx),
            (_, 0.0) => write!(f, "{}", &self.reference),
            (_, dx) => write!(f, "{}  {}mm", &self.reference, dx),
        }
    }
}

impl<'de> Deserialize<'de> for X {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        struct _X {
            reference: String,
            offset: f32,
        }

        let x = _X::deserialize(deserializer)?;

        Ok(X {
            reference: x.reference.trim().to_string(),
            offset: x.offset,
            _dr: 0.0,
            _offset: x.offset + 0.0,
        })
    }
}
