use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::ISet;
use crate::module::Is;
use crate::module::Item;
use crate::module::Module;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::XY;
use crate::panel::Y;

#[derive(Serialize, Debug)]
pub struct Decoration {
    version: u8,

    pub id: String,
    pub name: String,
    pub xy: XY,

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
        Decoration {
            version: 1,
            id: id.to_string(),
            name: name.to_string(),
            xy: XY::new(x, y, offset),
            scale: scale,
            stretch: stretch.clone(),
        }
    }

    pub fn decorates(&self, m: &Module, component: &str) -> bool {
        if let Some(v) = m.find_reference(&self.xy.x.reference) {
            if component == format!("{}<{}>", v.0, v.1) {
                return true;
            }

            if component == format!("{}<{}>", v.0, v.2) {
                return true;
            }
        }

        if let Some(v) = m.find_reference(&self.xy.y.reference) {
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
        return (self.xy.x.reference == reference || self.xy.y.reference == reference)
            && self.name == name;
    }

    pub fn migrate(&mut self, from: &str, to: &str) {
        if self.xy.x.reference == from {
            self.xy.x.reference = to.to_string();
        }

        if self.xy.y.reference == from {
            self.xy.y.reference = to.to_string();
        }
    }

    pub fn label(&self) -> String {
        if self.xy.x.reference == self.xy.y.reference {
            return format!("{}", self.xy.x.reference)
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
    fn set_x(&mut self, _: &X) {}

    fn set_y(&mut self, _: &Y) {}

    fn set_offset(&mut self, offset: &Option<Offset>) {
        self.xy.set_offset(offset);
    }
}

impl IXY for Decoration {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.xy.x.resolve(panel);
        let y = self.xy.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Decoration {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        const RADIUS: f32 = 2.5;

        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < RADIUS;
    }
}

impl IItem for Decoration {
    fn as_item(&self) -> Item {
        let mut attributes = vec![
            ("name".to_string(), self.name.clone()),
            ("x".to_string(), format!("{}", &self.xy.x)),
            ("y".to_string(), format!("{}", &self.xy.y)),
        ];

        if let Some(offset) = &self.xy.offset {
            if offset.radius > 0.0 {
                attributes.push((
                    "offset".to_string(),
                    format!("{}°/{}mm", offset.angle, offset.radius),
                ));
            }
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
                xy: XY,
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
                    xy: XY::new_without_offset(x,y),
                    scale: scale,
                    stretch: stretch,
                })
            },

            #[rustfmt::skip]
            _Decoration::V1 {version, id,name,xy,scale,stretch } => {
                Ok(Decoration {
                    version: version,
                    id: id,
                    name: name,
                    xy: xy,
                    scale: scale,
                    stretch: stretch,
                })
            },
        }
    }
}

impl Stretch {
    pub fn new(x: f32, y: f32) -> Stretch {
        Stretch { x: x, y: y }
    }
}
