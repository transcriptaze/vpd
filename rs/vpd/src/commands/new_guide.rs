use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
// use crate::panel::Panel;

pub struct NewGuideCommand {
    _name: String,
    _orientation: String,
    _offset: f32,
}

#[derive(Deserialize)]
struct V {
    #[serde(rename = "guide")]
    guide: G,
}

#[derive(Deserialize)]
struct G {
    #[serde(rename = "name")]
    name: String,

    #[serde(rename = "orientation")]
    orientation: String,

    #[serde(rename = "offset")]
    offset: f32,
}

impl NewGuideCommand {
    pub fn new(json: &str) -> Result<NewGuideCommand, Box<dyn Error>> {
        let v: V = serde_json::from_str(json)?;

        Ok(NewGuideCommand {
            _name: v.guide.name,
            _orientation: v.guide.orientation,
            _offset: v.guide.offset,
        })
    }
}

impl Command for NewGuideCommand {
    fn apply(&self, _m: &mut Module) {}
}
