use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};

use crate::commands::ExportSVGCommand;
use crate::commands::NewGuideCommand;
use crate::commands::NewLabelCommand;
use crate::commands::NewModuleCommand;
use crate::commands::NewParameterCommand;
use crate::commands::SetOriginCommand;

pub trait Command {
    fn apply(&self, m: &mut Module);
}

#[derive(Serialize, Deserialize, Debug)]
struct Action {
    #[serde(rename = "action")]
    action: String,

    #[serde(rename = "module")]
    module: Option<Entity>,

    #[serde(rename = "parameter")]
    parameter: Option<Entity>,

    #[serde(rename = "label")]
    label: Option<Entity>,

    #[serde(rename = "guide")]
    guide: Option<Entity>,

    #[serde(rename = "origin")]
    origin: Option<Attr>,

    #[serde(rename = "svg")]
    svg: Option<Entity>,
}

#[derive(Serialize, Deserialize, Debug)]
struct Entity {}

#[derive(Serialize, Deserialize, Debug)]
struct Attr {}

pub fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" && v.module.is_some() {
        Ok(Box::new(NewModuleCommand::new(json)?))
    } else if v.action == "new" && v.parameter.is_some() {
        Ok(Box::new(NewParameterCommand::new(json)?))
    } else if v.action == "new" && v.label.is_some() {
        Ok(Box::new(NewLabelCommand::new(json)?))
    } else if v.action == "new" && v.guide.is_some() {
        Ok(Box::new(NewGuideCommand::new(json)?))
    } else if v.action == "set" && v.origin.is_some() {
        Ok(Box::new(SetOriginCommand::new(json)?))
    } else if v.action == "export" && v.svg.is_some() {
        Ok(Box::new(ExportSVGCommand::new(json)?))
    } else {
        Err("unknown command".into())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_new() {
        let json = r#"{
            "action": "new",
            "module": {
            }
        }"#;

        match new(json) {
            Ok(_) => {}
            Err(e) => {
                assert!(false, "{}", e.to_string());
            }
        }
    }
}
