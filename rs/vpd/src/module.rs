use super::panel::Panel;
use super::panel::DEFAULT_HEIGHT;
use super::panel::DEFAULT_WIDTH;
use super::serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub name: Box<str>,
    pub panel: Panel,
}

pub fn new() -> Module {
    return Module {
        name: "unknown".into(),
        panel: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
    };
}

impl Module {}
