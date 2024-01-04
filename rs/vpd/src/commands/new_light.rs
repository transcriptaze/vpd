use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

pub struct NewLightCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "light")]
    light: Light,
}

#[derive(Deserialize)]
struct Light {
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

impl NewLightCommand {
    pub fn new(json: &str) -> Result<NewLightCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewLightCommand {
            name: o.light.name.unwrap_or("".to_string()),
            x: panel::X {
                reference: o.light.x.reference,
                offset: o.light.x.offset,
            },
            y: panel::Y {
                reference: o.light.y.reference,
                offset: o.light.y.offset,
            },
            part: o.light.part,
        })
    }
}

impl Command for NewLightCommand {
    fn apply(&self, m: &mut Module) {
        m.panel
            .lights
            .push(panel::Light::new(&self.name, &self.x, &self.y, &self.part));
    }
}
