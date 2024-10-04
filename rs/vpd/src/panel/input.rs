use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::Item;
use crate::panel::Offset;
use crate::panel::Panel;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize, Deserialize, Debug)]
pub struct Input {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub offset: Option<Offset>,
    pub part: Option<String>,
}

impl Input {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        offset: &Option<Offset>,
        part: &Option<String>,
    ) -> Input {
        let x = X::new_with_offset(x.reference.as_str(), x.offset, offset);
        let y = Y::new_with_offset(y.reference.as_str(), y.offset, offset);

        Input {
            id: id.to_string(),
            name: name.to_string(),
            x: x,
            y: y,
            offset: offset.clone(),
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
        if self.x.reference == from {
            self.x.reference = to.to_string();
        }

        if self.y.reference == from {
            self.y.reference = to.to_string();
        }
    }
}

impl IXY for Input {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);

        (x, y)
    }
}

impl IQueryable for Input {
    const RADIUS: f32 = 2.5;

    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < Input::RADIUS;
    }
}

impl IItem for Input {
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
            itype: "input".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}
