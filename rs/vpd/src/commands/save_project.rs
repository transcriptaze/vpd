use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct SaveProject {
    timestamp: Option<bool>,
    gzip: Option<bool>,
}

#[derive(Deserialize)]
struct Object {
    project: SaveProject,
}

impl SaveProject {
    pub fn new(json: &str) -> Result<SaveProject, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.project)
    }
}

impl Command for SaveProject {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module, _line: &Option<String>) -> bool {
        let timestamp = match self.timestamp {
            Some(v) => v,
            _ => false,
        };

        let gzip = match self.gzip {
            Some(v) => v,
            _ => false,
        };

        m.save_project(timestamp, gzip);

        false
    }
}
