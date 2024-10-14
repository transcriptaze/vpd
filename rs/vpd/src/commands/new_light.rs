use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::panel::XY;

#[derive(Deserialize)]
pub struct NewLight {
    name: String,
    x: panel::X,
    y: panel::Y,
    offset: Option<panel::Offset>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    light: NewLight,
}

impl NewLight {
    pub fn new(json: &str) -> Result<NewLight, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.light)
    }
}

impl Command for NewLight {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        let name = self.name.as_str();

        if let Some(_) = m.find_light(&name) {
            return Some(format!("duplicate light name '{}'", name).into());
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        let id = m.new_light_id();
        let xy = XY::new(&self.x, &self.y, &self.offset);

        m.panel
            .lights
            .push(panel::Light::new(&id, &self.name, &xy, &self.part));
    }
}
