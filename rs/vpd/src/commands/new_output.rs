use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewOutputCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "output")]
    output: Output,
}

#[derive(Deserialize)]
struct Output {
    #[serde(rename = "name")]
    name: Option<String>,

    #[serde(rename = "x")]
    x: X,

    #[serde(rename = "y")]
    y: Y,

    #[serde(rename = "part")]
    part: Option<String>,
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

impl NewOutputCommand {
    pub fn new(json: &str) -> Result<NewOutputCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewOutputCommand {
            name: o.output.name.unwrap_or("".to_string()),
            x: panel::X {
                reference: o.output.x.reference,
                offset: o.output.x.offset,
            },
            y: panel::Y {
                reference: o.output.y.reference,
                offset: o.output.y.offset,
            },
            part: o.output.part,
   })
    }
}

impl Command for NewOutputCommand {
    fn apply(&self, m: &mut Module) {
        m.panel
            .outputs
            .push(panel::Output::new(&self.name, &self.x, &self.y, &self.part));
    }
}
