use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct ExportHelper {}

#[derive(Deserialize)]
struct Object {
    helper: ExportHelper,
}

impl ExportHelper {
    pub fn new(json: &str) -> Result<ExportHelper, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.helper)
    }
}

impl Command for ExportHelper {
    fn apply(&self, m: &mut Module) {
        m.export_helper();
    }
}
