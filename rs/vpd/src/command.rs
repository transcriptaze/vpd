use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};

use crate::commands::ExportSVG;
use crate::commands::LoadProject;
use crate::commands::LoadScript;
use crate::commands::NewGuide;
use crate::commands::NewInput;
use crate::commands::NewLabel;
use crate::commands::NewLight;
use crate::commands::NewModule;
use crate::commands::NewOutput;
use crate::commands::NewParameter;
use crate::commands::NewWidget;
use crate::commands::SaveProject;
use crate::commands::SaveScript;
use crate::commands::SetBackgroundCommand;
use crate::commands::SetOriginCommand;

pub trait Command {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool;
}

#[derive(Serialize, Deserialize, Debug)]
struct Action {
    src: Option<String>,
    action: String,
    module: Option<Entity>,
    background: Option<Attr>,
    input: Option<Entity>,
    output: Option<Entity>,
    parameter: Option<Entity>,
    light: Option<Entity>,
    widget: Option<Entity>,
    label: Option<Entity>,
    guide: Option<Entity>,
    origin: Option<Attr>,

    project: Option<Entity>,
    script: Option<Entity>,
    svg: Option<Entity>,
}

#[derive(Serialize, Deserialize, Debug)]
struct Entity {}

#[derive(Serialize, Deserialize, Debug)]
struct Attr {}

pub fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" && v.module.is_some() {
        Ok(Box::new(NewModule::new(json)?))
    } else if v.action == "new" && v.input.is_some() {
        Ok(Box::new(NewInput::new(json)?))
    } else if v.action == "new" && v.output.is_some() {
        Ok(Box::new(NewOutput::new(json)?))
    } else if v.action == "new" && v.parameter.is_some() {
        Ok(Box::new(NewParameter::new(json)?))
    } else if v.action == "new" && v.light.is_some() {
        Ok(Box::new(NewLight::new(json)?))
    } else if v.action == "new" && v.widget.is_some() {
        Ok(Box::new(NewWidget::new(json)?))
    } else if v.action == "new" && v.label.is_some() {
        Ok(Box::new(NewLabel::new(json)?))
    } else if v.action == "new" && v.guide.is_some() {
        Ok(Box::new(NewGuide::new(json)?))
    } else if v.action == "set" && v.origin.is_some() {
        Ok(Box::new(SetOriginCommand::new(json)?))
    } else if v.action == "set" && v.background.is_some() {
        Ok(Box::new(SetBackgroundCommand::new(json)?))
    } else if v.action == "load" && v.project.is_some() {
        Ok(Box::new(LoadProject::new(json)?))
    } else if v.action == "save" && v.project.is_some() {
        Ok(Box::new(SaveProject::new(json)?))
    } else if v.action == "load" && v.script.is_some() {
        Ok(Box::new(LoadScript::new(json)?))
    } else if v.action == "save" && v.script.is_some() {
        Ok(Box::new(SaveScript::new(json)?))
    } else if v.action == "export" && v.svg.is_some() {
        Ok(Box::new(ExportSVG::new(json)?))
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
                "name": "test",
                "width": 45.72,
                "height": 128.5
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
