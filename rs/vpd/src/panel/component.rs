use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

trait IComponent {}

#[derive(Serialize, Deserialize)]
pub struct Component {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Component {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, part: &Option<String>) -> Component {
        Component {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}

// impl Component {
//     fn id(&self) -> String {
//         self.id.to_string()
//     }
// }