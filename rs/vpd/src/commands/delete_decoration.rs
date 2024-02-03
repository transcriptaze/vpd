use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct DeleteDecoration {
    id: Option<String>,
    reference: Option<String>,
    name: Option<String>,
}

#[derive(Deserialize)]
struct Object {
    decoration: DeleteDecoration,
}

impl DeleteDecoration {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.decoration)
    }
}

impl Command for DeleteDecoration {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool {
        if let Some(id) = &self.id {
            let mut it = m.panel.decorations.iter();

            if let Some(ix) = it.position(|v| &v.id == id) {
                m.panel.decorations.remove(ix);
            }
        } else {
            match (&self.reference, &self.name) {
                (Some(reference), Some(name)) => {
                    let mut it = m.panel.decorations.iter();

                    if let Some(ix) = it.position(|v| v.matches(reference, name)) {
                        m.panel.decorations.remove(ix);
                    }
                }
                _ => {}
            }
        }

        match line {
            Some(v) => m.script.push(v.to_string()),
            _ => {}
        }

        true
    }
}
