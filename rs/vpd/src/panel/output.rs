use serde::{Deserialize, Serialize};

use crate::module::IItem;
use crate::module::Item;
use crate::panel::Panel;
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
    pub part: Option<String>,
}

impl Output {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, part: &Option<String>) -> Output {
        Output {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }

    pub fn as_svg(&self, panel: &Panel) -> Circle {
        let name = &self.name;
        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);
        let radius = 2.54;
        let colour = "#0000ff";

        Circle::new(name, x, y, radius, &colour)
    }

    pub fn as_component(&self, panel: &Panel) -> Component {
        let name = &self.name;
        let x = self.x.resolve(panel);
        let y = self.y.resolve(panel);

        Component::new(name, x, y)
    }
}

impl IItem for Output {
    fn as_item(&self) -> Item {
        let mut attributes = vec![
            ("x".to_string(), format!("{}", &self.x)),
            ("y".to_string(), format!("{}", &self.y)),
        ];

        if let Some(part) = &self.part {
            attributes.push(("part".to_string(), part.clone()));
        }

        Item {
            itype: "output".to_string(),
            id: self.id.clone(),
            name: self.name.clone(),
            attributes: attributes,
        }
    }
}
