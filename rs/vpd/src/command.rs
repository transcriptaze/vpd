use std::error::Error;

use super::module::Module;
use serde::{Deserialize, Serialize};
use serde_json::value::RawValue;

use crate::commands::NewDecoration;
use crate::commands::NewGuide;
use crate::commands::NewInput;
use crate::commands::NewLabel;
use crate::commands::NewLight;
use crate::commands::NewModule;
use crate::commands::NewOutput;
use crate::commands::NewParameter;
use crate::commands::NewWidget;

use crate::commands::SetBackground;
use crate::commands::SetInput;
use crate::commands::SetLight;
use crate::commands::SetModule;
use crate::commands::SetOrigin;
use crate::commands::SetOutput;
use crate::commands::SetParameter;
use crate::commands::SetWidget;

use crate::commands::DeleteDecoration;
use crate::commands::DeleteGuide;
use crate::commands::DeleteInput;
use crate::commands::DeleteLabel;
use crate::commands::DeleteLight;
use crate::commands::DeleteOutput;
use crate::commands::DeleteParameter;
use crate::commands::DeleteWidget;

use crate::commands::ExportHeader;
use crate::commands::ExportSVG;
use crate::commands::LoadProject;
use crate::commands::LoadScript;
use crate::commands::SaveProject;
use crate::commands::SaveScript;

pub trait Command {
    fn validate(&self, _m: &mut Module) -> Option<Box<dyn Error>> {
        None
    }

    fn apply(&self, m: &mut Module);
}

pub struct Wrapper {
    command: Box<dyn Command>,
    src: Option<String>,
    reload: bool,
}

#[derive(Serialize, Deserialize, Debug)]
struct Action<'a> {
    src: Option<String>,
    action: String,

    #[serde(borrow)]
    module: Option<&'a RawValue>,
    background: Option<Attr>,
    input: Option<Entity>,
    output: Option<Entity>,
    parameter: Option<Entity>,
    light: Option<Entity>,
    widget: Option<Entity>,
    label: Option<Entity>,
    decoration: Option<Entity>,
    guide: Option<Entity>,
    origin: Option<Attr>,

    project: Option<Entity>,
    script: Option<Entity>,
    svg: Option<Entity>,
    header: Option<Entity>,
}

#[derive(Serialize, Deserialize, Debug)]
struct Entity {}

#[derive(Serialize, Deserialize, Debug)]
struct Attr {}

pub fn parse(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" {
        let boxed = new(json)?;
        let wrapper = Wrapper::new(boxed, v.src, true);

        return Ok(wrapper);
    }

    if v.action == "set" {
        let boxed = set(json)?;
        let wrapper = Wrapper::new(boxed, v.src, true);

        return Ok(wrapper);
    }

    if v.action == "delete" {
        let boxed = delete(json)?;
        let wrapper = Wrapper::new(boxed, v.src, true);

        return Ok(wrapper);
    }

    if v.action == "load" || v.action == "save" || v.action == "export" {
        let boxed = files(json)?;
        let wrapper = Wrapper::new(boxed, None, false);

        return Ok(wrapper);
    }

    return Err("unknown command".into());
}

fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.module.is_some() {
        return Ok(Box::new(NewModule::new(json)?));
    }

    if v.input.is_some() {
        return Ok(Box::new(NewInput::new(json)?));
    }

    if v.output.is_some() {
        return Ok(Box::new(NewOutput::new(json)?));
    }

    if v.parameter.is_some() {
        return Ok(Box::new(NewParameter::new(json)?));
    }

    if v.light.is_some() {
        return Ok(Box::new(NewLight::new(json)?));
    }

    if v.widget.is_some() {
        return Ok(Box::new(NewWidget::new(json)?));
    }

    if v.label.is_some() {
        return Ok(Box::new(NewLabel::new(json)?));
    }

    if v.decoration.is_some() {
        return Ok(Box::new(NewDecoration::new(json)?));
    }

    if v.guide.is_some() {
        return Ok(Box::new(NewGuide::new(json)?));
    }

    return Err("invalid 'new' command".into());
}

fn set(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.origin.is_some() {
        return Ok(Box::new(SetOrigin::new(json)?));
    }

    if v.module.is_some() {
        return Ok(Box::new(SetModule::new(json)?));
    }

    if v.background.is_some() {
        return Ok(Box::new(SetBackground::new(json)?));
    }

    if v.input.is_some() {
        return Ok(Box::new(SetInput::new(json)?));
    }

    if v.output.is_some() {
        return Ok(Box::new(SetOutput::new(json)?));
    }

    if v.parameter.is_some() {
        return Ok(Box::new(SetParameter::new(json)?));
    }

    if v.light.is_some() {
        return Ok(Box::new(SetLight::new(json)?));
    }

    if v.widget.is_some() {
        return Ok(Box::new(SetWidget::new(json)?));
    }

    return Err("invalid 'set' command".into());
}

fn delete(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.guide.is_some() {
        return Ok(Box::new(DeleteGuide::new(json)?));
    }

    if v.input.is_some() {
        return Ok(Box::new(DeleteInput::new(json)?));
    }

    if v.output.is_some() {
        return Ok(Box::new(DeleteOutput::new(json)?));
    }

    if v.parameter.is_some() {
        return Ok(Box::new(DeleteParameter::new(json)?));
    }

    if v.light.is_some() {
        return Ok(Box::new(DeleteLight::new(json)?));
    }

    if v.widget.is_some() {
        return Ok(Box::new(DeleteWidget::new(json)?));
    }

    if v.label.is_some() {
        return Ok(Box::new(DeleteLabel::new(json)?));
    }

    if v.decoration.is_some() {
        return Ok(Box::new(DeleteDecoration::new(json)?));
    }

    return Err("invalid 'delete' command".into());
}

fn files(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "load" && v.project.is_some() {
        return Ok(Box::new(LoadProject::new(json)?));
    }

    if v.action == "save" && v.project.is_some() {
        return Ok(Box::new(SaveProject::new(json)?));
    }

    if v.action == "load" && v.script.is_some() {
        return Ok(Box::new(LoadScript::new(json)?));
    }

    if v.action == "save" && v.script.is_some() {
        return Ok(Box::new(SaveScript::new(json)?));
    }

    if v.action == "export" && v.svg.is_some() {
        return Ok(Box::new(ExportSVG::new(json)?));
    }

    if v.action == "export" && v.header.is_some() {
        return Ok(Box::new(ExportHeader::new(json)?));
    }

    return Err("invalid command".into());
}

impl Wrapper {
    pub fn new(command: Box<dyn Command>, src: Option<String>, reload: bool) -> Wrapper {
        Wrapper {
            command: command,
            src: src,
            reload: reload,
        }
    }

    pub fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        self.command.validate(m)
    }

    pub fn apply(&self, m: &mut Module) -> bool {
        self.command.apply(m);

        if let Some(line) = &self.src {
            m.script.push(line.to_string());
        }

        return self.reload;
    }
}
