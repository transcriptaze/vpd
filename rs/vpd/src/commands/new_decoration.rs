use std::error::Error;

use serde::Deserialize;

use crate::command::Command;
use crate::module::Module;
use crate::panel;

#[derive(Deserialize)]
pub struct NewDecoration {
    entity: String,
    name: String,
}

#[derive(Deserialize)]
struct Object {
    decoration: NewDecoration,
}

impl NewDecoration {
    pub fn new(json: &str) -> Result<NewDecoration, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.decoration)
    }
}

impl Command for NewDecoration {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        // let id = m.new_input_id();
        //
        // m.panel.inputs.push(panel::Input::new(
        //     &id, &self.name, &self.x, &self.y, &self.part,
        // ));
        //
        // match line {
        //     Some(v) => m.script.push(v.to_string()),
        //     _ => {}
        // }

        true
    }
}
