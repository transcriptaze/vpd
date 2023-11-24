use super::panel;
use super::serde::Serialize;

#[derive(Serialize)]
pub struct Module {
    pub name: Box<str>,
    pub light: panel::Panel,
    pub dark: panel::Panel,
}

pub fn new() -> Module {
    return Module {
        name: "uiop".into(),
        light: panel::new(),
        dark: panel::new(),
    };
}

impl Module {}
