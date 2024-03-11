use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::Item;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize, Debug)]
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

    pub fn decorates(&self, component: &str) -> bool {
        return self.x.reference == component || self.y.reference == component;
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
