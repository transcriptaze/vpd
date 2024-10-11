use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::ISet;
use crate::module::Is;
use crate::module::Item;
use crate::module::Module;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Debug)]
pub struct Decoration {
    version: u8,

    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub offset: Option<Offset>,

    pub scale: f32,
    pub stretch: Stretch,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Stretch {
    pub x: f32,
    pub y: f32,
}

impl Decoration {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        offset: &Option<Offset>,
        scale: f32,
        stretch: &Stretch,
    ) -> Decoration {
        let _x = X::new_with_offset(x.reference.as_str(), x.offset, offset);
        let _y = Y::new_with_offset(y.reference.as_str(), y.offset, offset);

        Decoration {
            version: 1,
            id: id.to_string(),
            name: name.to_string(),
            x: _x,
            y: _y,
            offset: offset.clone(),
            scale: scale,
            stretch: stretch.clone(),
        }
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

impl Is for Decoration {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.name.trim().to_lowercase() == name
    }
}

impl ISet for Decoration {
    fn set_offset(&mut self, offset: &Option<Offset>) {
        let x = X::new_with_offset(self.x.reference.as_str(), self.x.offset, offset);
        let y = Y::new_with_offset(self.y.reference.as_str(), self.y.offset, offset);

        self.x = x;
        self.y = y;
        self.offset = offset.clone();
    }
}

impl IXY for Decoration {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);

        (x, y)
    }
}

impl Stretch {
    pub fn new(x: f32, y: f32) -> Stretch {
        Stretch { x: x, y: y }
    }
}

impl IItem for Decoration {
    fn as_item(&self) -> Item {
        let mut attributes = vec![
            ("name".to_string(), self.name.clone()),
            ("x".to_string(), format!("{}", &self.x)),
            ("y".to_string(), format!("{}", &self.y)),
        ];

        if let Some(offset) = &self.offset {
            attributes.push((
                "offset".to_string(),
                format!("{}°/{}mm", offset.angle, offset.radius),
            ));
        }

        attributes.push(("scale".to_string(), format!("{}", &self.scale)));
        attributes.push((
            "stretch".to_string(),
            format!("{},{}", &self.stretch.x, &self.stretch.y),
        ));

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
            V1 {
                version: u8,
                id: String,
                name: String,
                x: X,
                y: Y,
                offset: Option<Offset>,
                scale: f32,
                stretch: Stretch,
            },

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
                    version: 0,
                    id: id,
                    name: name,
                    x: x,
                    y: y,
                    offset: None,
                    scale: scale,
                    stretch: stretch,
                })
            },

            #[rustfmt::skip]
            _Decoration::V1 {version, id,name,x,y,offset,scale,stretch } => {
                Ok(Decoration {
                    version: version,
                    id: id,
                    name: name,
                    x: x,
                    y: y,
                    offset: offset,
                    scale: scale,
                    stretch: stretch,
                })
            },
        }
    }
}
