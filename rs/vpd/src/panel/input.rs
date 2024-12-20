use serde::{Deserialize, Deserializer, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::IWidget;
use crate::module::Item;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::XY;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize, Debug)]
pub struct Input {
    version: u8,

    pub id: String,
    pub name: String,
    pub xy: XY,

    #[serde(skip_serializing_if = "Option::is_none")]
    pub part: Option<String>,
}

impl Input {
    pub fn new(id: &str, name: &str, xy: &XY, part: &Option<String>) -> Input {
        Input {
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
        let colour = "#00ff00";

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
}

impl IWidget for Input {
    fn is(&self, id: &str) -> bool {
        self.id == id
    }

    fn named(&self, name: &str) -> bool {
        self.name.trim().to_lowercase() == name
    }

    fn xy(&self) -> &XY {
        return &self.xy;
    }

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

impl IXY for Input {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.xy.x.resolve(panel);
        let y = self.xy.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Input {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        const RADIUS: f32 = 2.5;

        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < RADIUS;
    }
}

impl IItem for Input {
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
            itype: "input".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl<'de> Deserialize<'de> for Input {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum _Input {
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

        let i = _Input::deserialize(deserializer)?;

        match i {
            #[rustfmt::skip]
            _Input::V0 {id,name,x,y,part } => {
                let offset: Option<Offset> = None;
                let xy = XY::new(&x, &y, &offset);

                Ok(Input::new(&id, &name, &xy, &part))
            }

            #[rustfmt::skip]
            _Input::V1 { _version, id, name, xy, part } => {
                Ok(Input::new(&id, &name, &xy, &part))
            },
        }
    }
}
