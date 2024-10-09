use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::Item;
use crate::module::Module;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Debug)]
pub struct Decoration {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub scale: f32,
    pub stretch: Stretch,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Stretch {
    pub x: f32,
    pub y: f32,
}

impl Decoration {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, scale: f32, stretch: &Stretch) -> Decoration {
        Decoration {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            scale: scale,
            stretch: stretch.clone(),
        }
    }

    pub fn is(&self, name: &str) -> bool {
        return self.name.trim().to_lowercase() == name;
    }

    pub fn decorates(&self, m: &Module, component: &str) -> bool {
        if let Some(v) = m.find_reference(&self.x.reference) {
            if component == format!("{}<{}>", v.0, v.1) {
                return true;
            }

            if component == format!("{}<{}>", v.0, v.2) {
                return true;
            }
        }

        if let Some(v) = m.find_reference(&self.y.reference) {
            if component == format!("{}<{}>", v.0, v.1) {
                return true;
            }

            if component == format!("{}<{}>", v.0, v.2) {
                return true;
            }
        }

        return false;
    }

    pub fn matches(&self, reference: &str, name: &str) -> bool {
        return (self.x.reference == reference || self.y.reference == reference)
            && self.name == name;
    }

    pub fn migrate(&mut self, from: &str, to: &str) {
        if self.x.reference == from {
            self.x.reference = to.to_string();
        }

        if self.y.reference == from {
            self.y.reference = to.to_string();
        }
    }

    pub fn label(&self) -> String {
        if self.x.reference == self.y.reference {
            return format!("{}", self.x.reference)
                .replace("<", "[")
                .replace(">", "]");
        } else {
            return format!("{}", self.id).replace("<", "[").replace(">", "]");
        }
    }
}

impl Stretch {
    pub fn new(x: f32, y: f32) -> Stretch {
        Stretch { x: x, y: y }
    }
}

impl IItem for Decoration {
    fn as_item(&self) -> Item {
        let attributes = vec![
            ("name".to_string(), self.name.clone()),
            ("x".to_string(), format!("{}", &self.x)),
            ("y".to_string(), format!("{}", &self.y)),
            ("scale".to_string(), format!("{}", &self.scale)),
            (
                "stretch".to_string(),
                format!("{},{}", &self.stretch.x, &self.stretch.y),
            ),
        ];

        Item {
            itype: "decoration".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl<'de> Deserialize<'de> for Decoration {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Decoration {
            V0 {
                id: String,
                name: String,
                x: X,
                y: Y,
                scale: f32,
                stretch: Stretch,
            },
        }

        let d = _Decoration::deserialize(deserializer)?;

        match d {
            #[rustfmt::skip]
            _Decoration::V0 {id,name,x,y,scale,stretch } => {
                Ok(Decoration {
                    id: id,
                    name: name,
                    x: x,
                    y: y,
                    scale: scale,
                    stretch: stretch,
                })
            },
        }
    }
}
