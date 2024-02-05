use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewParameter {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    parameter: NewParameter,
}

impl NewParameter {
    pub fn new(json: &str) -> Result<NewParameter, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.parameter)
    }
}

impl Command for NewParameter {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        let id = m.new_parameter_id();

        m.panel.parameters.push(panel::Parameter::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
