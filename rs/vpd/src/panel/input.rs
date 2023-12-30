use serde::{Deserialize, Serialize};

use crate::panel::Anchor;

#[derive(Serialize, Deserialize)]
pub struct Input {
    pub name: String,
    pub x: Anchor,
    pub y: Anchor,
}

impl Input {
    pub fn new(name: &str, x: &Anchor, y: &Anchor) -> Input {
        Input {
            name: name.to_string(),
            x: x.clone(),
            y: y.clone(),
        }
    }
}
