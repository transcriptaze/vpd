use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::IQueryable;
use crate::module::Item;
use crate::panel::Panel;
use crate::panel::Polar;
use crate::panel::X;
use crate::panel::Y;

use crate::svg::Circle;
use crate::vcv::Component;

#[derive(Serialize, Deserialize)]
pub struct Parameter {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub offset: Option<Polar>,
    pub part: Option<String>,
}

impl Parameter {
    pub fn new(
        id: &str,
        name: &str,
        x: &X,
        y: &Y,
        angle: Option<f32>,
        radius: Option<f32>,
        part: &Option<String>,
    ) -> Parameter {
        Parameter {
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
        let (x, y) = panel.resolve(&self.x, &self.y, &self.offset);
        let radius = 2.54;
        let colour = "#ff0000";

        Circle::new(name, x, y, radius, &colour)
    }

    pub fn as_component(&self, panel: &Panel) -> Component {
        let name = &self.name;
        let (x, y) = panel.resolve(&self.x, &self.y, &self.offset);

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

impl IItem for Parameter {
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
            itype: "parameter".to_string(),
            id: self.id.clone(),
            attributes: attributes,
        }
    }
}

impl IQueryable for Parameter {
    const RADIUS: f32 = 2.5;

    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool {
        let (_x, _y) = panel.resolve(&self.x, &self.y, &self.offset);
        let dx = _x - x;
        let dy = _y - y;
        let r = (dx * dx + dy * dy).sqrt();

        return r < Parameter::RADIUS;
    }
}
