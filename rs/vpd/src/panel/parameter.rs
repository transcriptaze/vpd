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
use crate::panel::XY;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize)]
pub struct Parameter {
    version: u8,

    pub id: String,
    pub name: String,
    pub xy: XY,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub part: Option<String>,
}

impl Parameter {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        offset: &Option<Offset>,
        part: &Option<String>,
    ) -> Parameter {
        let xy = XY::new(x, y, offset);

        Parameter {
            version: 1,
            id: id.to_string(),
            name: name.to_string(),
            xy: xy,
            part: part.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel) -> Circle {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);
        let radius = 2.54;
        let colour = "#ff0000";

        Circle::new(name, x, y, radius, &colour)
    }

    pub fn as_component(&self, panel: &Panel) -> Component {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);

        Component::new(name, x, y)
    }

    pub fn migrate(&mut self, from: &str, to: &str) {
        if self.xy.x.reference == from {
            self.xy.x.reference = to.to_string();
        }

        if self.xy.y.reference == from {
            self.xy.y.reference = to.to_string();
        }
    }

    pub fn x(&self) -> X {
        return self.xy.x.clone();
    }

    pub fn y(&self) -> Y {
        return self.xy.y.clone();
    }
}

impl Is for Parameter {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.name.trim().to_lowercase() == name
    }
}

impl ISet for Parameter {
    fn set_x(&mut self, x: &X) {
        self.xy.set_x(x);
    }

    fn set_y(&mut self, y: &Y) {
        self.xy.set_y(y);
    }

    fn set_offset(&mut self, offset: &Option<Offset>) {
        self.xy.set_offset(offset);
    }
}

impl IXY for Parameter {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.xy.x.resolve(panel);
        let y = self.xy.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Parameter {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        const RADIUS: f32 = 2.5;

        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < RADIUS;
    }
}

impl IItem for Parameter {
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

        if let Some(part) = &self.part {
            attributes.push(("part".to_string(), part.clone()));
        }

        Item {
            itype: "parameter".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl<'de> Deserialize<'de> for Parameter {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Parameter {
            V1 {
                version: u8,
                id: String,
                name: String,
                xy: XY,
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

        let p = _Parameter::deserialize(deserializer)?;

        match p {
            #[rustfmt::skip]
            _Parameter::V0 {id,name,x,y,part } => {
                Ok(Parameter {
                    version: 0,
                    id: id,
                    name: name,
                    xy: XY::new_without_offset(x,y),
                    part: part,
                })
            },

            #[rustfmt::skip]
            _Parameter::V1 { version, id, name, xy, part } => {
                Ok(Parameter {
                    version: version,
                    id: id,
                    name: name,
                    xy: xy,
                    part: part,
                })
            },
        }
    }
}
