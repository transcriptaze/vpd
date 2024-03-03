use serde::Deserialize;
use serde::Serialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::svg::PARTS;

#[derive(Deserialize)]
pub struct ListParts {
    preloaded: Vec<String>,
    user: Vec<String>,
}

#[derive(Deserialize)]
struct Object {
    parts: ListParts,
}

#[derive(Serialize)]
struct PartList {
    preloaded: Vec<String>,
    user: Vec<String>,
}

impl ListParts {
    pub fn new(json: &str) -> Result<ListParts, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.parts)
    }
}

impl Command for ListParts {
    fn apply(&self, m: &mut Module) {
        let mut preloaded: Vec<String> = PARTS.iter().map(|&v| v.to_string()).collect();

        preloaded.extend(self.preloaded.iter().cloned());

        let object = PartList {
            preloaded: preloaded,
            user: self.user.clone(),
        };

        m.list_parts(&object);
    }
}
