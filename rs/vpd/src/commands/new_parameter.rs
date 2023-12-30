use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewParameterCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "parameter")]
    parameter: Parameter,
}

#[derive(Deserialize)]
struct Parameter {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "x")]
    x: X,

    #[serde(rename = "y")]
    y: Y,
}

#[derive(Deserialize)]
struct X {
    #[serde(rename = "reference")]
    reference: String,

    #[serde(rename = "offset")]
    offset: f32,
}

#[derive(Deserialize)]
struct Y {
    #[serde(rename = "reference")]
    reference: String,

    #[serde(rename = "offset")]
    offset: f32,
}

impl NewParameterCommand {
    pub fn new(json: &str) -> Result<NewParameterCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewParameterCommand {
            name: o.parameter.name.unwrap_or("".to_string()),
            x: panel::X {
                reference: o.parameter.x.reference,
                offset: o.parameter.x.offset,
            },
            y: panel::Y {
                reference: o.parameter.y.reference,
                offset: o.parameter.y.offset,
            },
        })
    }
}

impl Command for NewParameterCommand {
    fn apply(&self, m: &mut Module) {
        m.panel
            .parameters
            .push(panel::Parameter::new(&self.name, &self.x, &self.y));
    }
}
