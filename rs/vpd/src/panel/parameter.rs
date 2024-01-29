use serde::{Deserialize, Serialize};
use std::collections::HashMap;

use crate::module::IItem;
use crate::module::Item;
use crate::panel::X;
use crate::panel::Y;

#[derive(Serialize, Deserialize)]
pub struct Parameter {
    pub id: String,
    pub name: String,
    pub x: X,
    pub y: Y,
    pub part: Option<String>,
}

impl Parameter {
    pub fn new(id: &str, name: &str, x: &X, y: &Y, part: &Option<String>) -> Parameter {
        Parameter {
            id: id.to_string(),
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
            part: part.clone(),
        }
    }
}

impl IItem for Parameter {
    fn as_item(&self) -> Item {
        Item {
            itype: "parameter".to_string(),
            id: self.id.clone(),
            name: self.name.clone(),
            attributes: HashMap::new(),
        }
    }
}
