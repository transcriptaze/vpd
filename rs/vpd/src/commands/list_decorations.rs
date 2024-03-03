use serde::Deserialize;
use serde::Serialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::svg::DECORATIONS;

#[derive(Deserialize)]
pub struct ListDecorations {
    preloaded: Vec<String>,
    user: Vec<String>,
}

#[derive(Deserialize)]
struct Object {
    decorations: ListDecorations,
}

#[derive(Serialize)]
struct DecorationList {
    preloaded: Vec<String>,
    user: Vec<String>,
}

impl ListDecorations {
    pub fn new(json: &str) -> Result<ListDecorations, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.decorations)
    }
}

impl Command for ListDecorations {
    fn apply(&self, m: &mut Module) {
        let mut preloaded: Vec<String> = DECORATIONS.iter().map(|&v| v.to_string()).collect();

        preloaded.extend(self.preloaded.iter().cloned());

        let object = DecorationList {
            preloaded: preloaded,
            user: self.user.clone(),
        };

        m.list_decorations(&object);
    }
}
