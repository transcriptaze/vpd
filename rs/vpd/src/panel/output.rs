use std::f32::consts::PI;

use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::Item;
use crate::panel::Panel;
use crate::panel::Polar;
use crate::panel::IXY;
use crate::panel::X;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize, Deserialize)]
pub struct Output {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub offset: Option<Polar>,
    pub part: Option<String>,
}

impl Output {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        angle: Option<f32>,
        radius: Option<f32>,
        part: &Option<String>,
    ) -> Output {
        Output {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            offset: Some(Polar::new(angle, radius)),
            part: part.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel) -> Circle {
        let name = &self.name;
        let (x, y) = self.resolvexy(panel);
        let radius = 2.54;
        let colour = "#0000ff";

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

impl IXY for Output {
    fn resolvexy(&self, panel: &Panel) -> (f32, f32) {
        let mut dx: f32 = 0.0;
        let mut dy: f32 = 0.0;

        if let Some(offset) = &self.offset {
            let radians = PI * offset.angle / 180.0;
            dx = offset.radius * radians.cos();
            dy = offset.radius * radians.sin();
        }

        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);

        (x + dx, y - dy)
    }
}

impl IQueryable for Output {
    const RADIUS: f32 = 2.5;

    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        let (_x, _y) = self.resolvexy(panel);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < Output::RADIUS;
    }
}

impl IItem for Output {
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
            itype: "output".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}
