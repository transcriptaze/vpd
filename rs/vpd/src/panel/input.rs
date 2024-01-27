use serde::{Deserialize, Serialize};
use std::collections::HashMap;

use crate::module::IItem;
use crate::module::Item;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize, Debug)]
pub struct Input {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Input {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, part: &Option<String>) -> Input {
        Input {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}

impl IItem for Input {
    fn as_item(&self) -> Item {
        Item {
            itype: "input".to_string(),
            id: self.id.clone(),
            name: self.name.clone(),
            attributes: HashMap::new(),
        }
    }
}
