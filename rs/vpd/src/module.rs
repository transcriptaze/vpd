use super::panel::Panel;
use super::panel::DEFAULT_HEIGHT;
use super::panel::DEFAULT_WIDTH;
use super::serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub name: Box<str>,
    pub light: Panel,
    pub dark: Panel,
}

pub fn new() -> Module {
    return Module {
        name: "unknown".into(),
        light: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
        dark: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
    };
}

impl Module {}
