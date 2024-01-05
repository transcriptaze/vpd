use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewLightCommand {
    name: String,
    x: panel::X,
    y: panel::Y,
    part: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    #[serde(rename = "light")]
    light: NewLightCommand,
}

impl NewLightCommand {
    pub fn new(json: &str) -> Result<NewLightCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(NewLightCommand {
            name: o.light.name.to_string(),
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
        let id = m.new_light_id();

        m.panel.lights.push(panel::Light::new(
            &id, &self.name, &self.x, &self.y, &self.part,
        ));
    }
}
