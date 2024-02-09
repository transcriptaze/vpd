use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct LoadProject {}

#[derive(Deserialize)]
struct Object {
    project: LoadProject,
}

impl LoadProject {
    pub fn new(json: &str) -> Result<LoadProject, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.project)
    }
}

impl Command for LoadProject {
    fn apply(&self, m: &mut Module) {
        m.load_project();
    }
}
