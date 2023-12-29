use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;
use crate::svg::Point;

pub struct NewParameterCommand {
    name: String,
    anchor: Point,
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

    #[serde(rename = "anchor")]
    anchor: Anchor,
}

#[derive(Deserialize)]
struct Anchor {
    #[serde(rename = "x")]
    x: f32,

    #[serde(rename = "y")]
    y: f32,
}

impl NewParameterCommand {
    pub fn new(json: &str) -> Result<NewParameterCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewParameterCommand {
            name: o.parameter.name.unwrap_or("".to_string()),
            anchor: Point {
                x: o.parameter.anchor.x,
                y: o.parameter.anchor.y,
            },
        })
    }
}

impl Command for NewParameterCommand {
    fn apply(&self, m: &mut Module) {
        m.panel.parameters.push(panel::Parameter::new(
            &self.name,
            self.anchor.x,
            self.anchor.y,
        ));
    }
}
