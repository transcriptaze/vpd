use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Background;

#[derive(Deserialize)]
pub struct SetBackgroundCommand {
    rgb: Option<String>,
    rgba: Option<String>,
    background: String,
}

#[derive(Deserialize)]
struct Object {
    background: SetBackgroundCommand,
}

impl SetBackgroundCommand {
    pub fn new(json: &str) -> Result<SetBackgroundCommand, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.background)
    }
}

impl Command for SetBackgroundCommand {
    fn apply(&self, m: &mut Module) {
        let rgb = &self.rgb;
        let rgba = &self.rgba;

        match (rgb, rgba) {
            (Some(v), _) => m.panel.background = Background::new_rgb(&self.background, &v),
            (_, Some(v)) => m.panel.background = Background::new_rgba(&self.background, v.as_str()),
            (_, _) => m.panel.background = Background::new(&self.background),
        }
    }
}
