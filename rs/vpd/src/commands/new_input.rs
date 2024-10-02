use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewInput {
    name: String,
    x: panel::X,
    y: panel::Y,
    angle: Option<f32>,
    radius: Option<f32>,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    input: NewInput,
}

impl NewInput {
    pub fn new(json: &str) -> Result<NewInput, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.input)
    }
}

impl Command for NewInput {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        let name = self.name.as_str();

        if let Some(_) = m.find_input(&name) {
            return Some(format!("duplicate input name '{}'", name).into());
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        let id = m.new_input_id();

        m.panel.inputs.push(panel::Input::new(
            &id,
            &self.name,
            &self.x,
            &self.y,
            self.angle,
            self.radius,
            &self.part,
        ));
    }
}
