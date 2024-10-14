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
pub struct Widget {
    version: u8,

    pub id: String,
    pub name: String,
    pub xy: XY,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub part: Option<String>,
}

impl Widget {
    pub fn new(id: &str, name: &str, xy: &XY, part: &Option<String>) -> Widget {
        Widget {
            version: 1,
            id: id.to_string(),
            name: name.to_string(),
            xy: xy.clone(),
            part: part.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel) -> Circle {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);
        let radius = 2.54;
        let colour = "#ffff00";

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

impl Is for Widget {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.name.trim().to_lowercase() == name
    }
}

impl ISet for Widget {
    fn set_x(&mut self, x: &X) {
        self.xy.x = x.clone();
    }

    fn set_y(&mut self, y: &Y) {
        self.xy.y = y.clone();
    }

    fn set_offset(&mut self, offset: &Option<Offset>) {
        let x = X::new_with_offset(self.xy.x.reference.as_str(), self.xy.x.offset, offset);
        let y = Y::new_with_offset(self.xy.y.reference.as_str(), self.xy.y.offset, offset);

        self.xy.x = x;
        self.xy.y = y;
        self.xy.offset = offset.clone();
    }
}

impl IXY for Widget {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.xy.x.resolve(panel);
        let y = self.xy.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Widget {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        const RADIUS: f32 = 2.5;

        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < RADIUS;
    }
}

impl IItem for Widget {
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
            itype: "widget".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl<'de> Deserialize<'de> for Widget {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Widget {
            V1 {
                #[serde(alias = "version")]
                _version: u8,
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

        let p = _Widget::deserialize(deserializer)?;

        match p {
            #[rustfmt::skip]
            _Widget::V0 {id,name,x,y,part } => {
                                let offset: Option<Offset> = None;
                let xy = XY::new(&x, &y, &offset);

                Ok(Widget::new(&id, &name, &xy, &part))
            }

            #[rustfmt::skip]
            _Widget::V1 { _version, id, name, xy,part } => {
                Ok(Widget::new(&id, &name, &xy, &part))
            },
        }
    }
}
