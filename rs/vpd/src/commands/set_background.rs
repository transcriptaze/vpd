use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::Background;

#[derive(Deserialize)]
pub struct SetBackground {
    rgb: Option<[String; 2]>,
    rgba: Option<[String; 2]>,
    background: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    background: SetBackground,
}

impl SetBackground {
    pub fn new(json: &str) -> Result<SetBackground, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.background)
    }
}

impl Command for SetBackground {
    fn apply(&self, m: &mut Module) -> bool {
        let rgb = &self.rgb;
        let rgba = &self.rgba;
        let background = &self.background;

        m.panel.background = match (rgb, rgba, background) {
            (Some(v), _, _) => Some(Background::new_rgb("rgb", &v[0], &v[1])),
            (_, Some(v), _) => Some(Background::new_rgba("rgba", &v[0], &v[1])),
            (_, _, Some(v)) => Some(Background::new(v)),
            (_, _, _) => None,
        };

        true
    }
}
