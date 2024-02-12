use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct ExportHeader {}

#[derive(Deserialize)]
struct Object {
    header: ExportHeader,
}

impl ExportHeader {
    pub fn new(json: &str) -> Result<ExportHeader, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.header)
    }
}

impl Command for ExportHeader {
    fn apply(&self, m: &mut Module) {
        m.export_header();
    }
}
