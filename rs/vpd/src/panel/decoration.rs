use serde::{Deserialize, Serialize};

use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize, Debug)]
pub struct Decoration {
    pub id: String,
    pub name: String,
    pub component: String,
    pub x: X,
    pub y: Y,
    pub scale: f32,
}

impl Decoration {
    pub fn new(id: &str, name: &str, component: &str, x: &X, y: &Y, scale: f32) -> Decoration {
        Decoration {
            id: id.to_string(),
            name: name.to_string(),
            component: component.to_string(),
            x: x.clone(),
            y: y.clone(),
            scale: scale,
        }
    }
}
