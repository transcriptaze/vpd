use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;

#[derive(Deserialize)]
pub struct ExportSVG {
    theme: String,
}

#[derive(Deserialize)]
struct Object {
    svg: ExportSVG,
}

impl ExportSVG {
    pub fn new(json: &str) -> Result<ExportSVG, Box<dyn Error>> {
        let o: Object = serde_json::from_str(json)?;

        Ok(o.svg)
    }
}

impl Command for ExportSVG {
    fn apply(&self, m: &mut Module) {
        m.export_svg(&self.theme);
    }
}
