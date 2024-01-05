use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewParameterCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    parameter: Parameter,
}

#[derive(Deserialize)]
struct Parameter {
    name: String,
    x: X,
    y: Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct X {
    reference: String,
    offset: f32,
}

#[derive(Deserialize)]
struct Y {
    reference: String,
    offset: f32,
}

impl NewParameterCommand {
    pub fn new(json: &str) -> Result<NewParameterCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewParameterCommand {
            name: o.parameter.name,
            x: panel::X {
                reference: o.parameter.x.reference,
                offset: o.parameter.x.offset,
            },
            y: panel::Y {
                reference: o.parameter.y.reference,
                offset: o.parameter.y.offset,
            },
            part: o.parameter.part,
        })
    }
}

impl Command for NewParameterCommand {
    fn apply(&self, m: &mut Module) {
        let id = m.new_parameter_id();

        m.panel.parameters.push(panel::Parameter::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));
    }
}
