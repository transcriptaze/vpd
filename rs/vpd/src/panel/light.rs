use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::ISet;
use crate::module::Is;
use crate::module::Item;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize)]
pub struct Light {
    version: u8,

    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub offset: Option<Offset>,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub part: Option<String>,
}

impl Light {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        offset: &Option<Offset>,
        part: &Option<String>,
    ) -> Light {
        let _x = X::new_with_offset(x.reference.as_str(), x.offset, offset);
        let _y = Y::new_with_offset(y.reference.as_str(), y.offset, offset);

        Light {
            version: 1,
            id: id.to_string(),
            name: name.to_string(),
            x: _x,
            y: _y,
            offset: offset.clone(),
            part: part.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel) -> Circle {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);
        let radius = 2.54;
        let colour = "#ff00ff";

        Circle::new(name, x, y, radius, &colour)
    }

    pub fn as_component(&self, panel: &Panel) -> Component {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);

        Component::new(name, x, y)
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

impl Is for Light {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.name.trim().to_lowercase() == name
    }
}

impl ISet for Light {
    fn set_offset(&mut self, offset: &Option<Offset>) {
        let x = X::new_with_offset(self.x.reference.as_str(), self.x.offset, offset);
        let y = Y::new_with_offset(self.y.reference.as_str(), self.y.offset, offset);

        self.x = x;
        self.y = y;
        self.offset = offset.clone();
    }
}

impl IXY for Light {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Light {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        const RADIUS: f32 = 2.5;

        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < RADIUS;
    }
}

impl IItem for Light {
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

        if let Some(part) = &self.part {
            attributes.push(("part".to_string(), part.clone()));
        }

        Item {
            itype: "light".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl<'de> Deserialize<'de> for Light {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Light {
            V1 {
                version: u8,
                id: String,
                name: String,
                x: X,
                y: Y,
                offset: Option<Offset>,
                part: Option<String>,
            },
            V0 {
                id: String,
                name: String,
                x: X,
                y: Y,
                part: Option<String>,
            },
        }

        let l = _Light::deserialize(deserializer)?;

        match l {
            #[rustfmt::skip]
            _Light::V0 {id,name,x,y,part } => {
                Ok(Light {
                    version: 0,
                    id: id,
                    name: name,
                    x: x,
                    y: y,
                    offset: None,
                    part: part,
                })
            },

            #[rustfmt::skip]
            _Light::V1 { version, id, name, x, y, offset, part } => {
                Ok(Light {
                    version: version,
                    id: id,
                    name: name,
                    x: x,
                    y: y,
                    offset: offset,
                    part: part,
                })
            },
        }
    }
}
