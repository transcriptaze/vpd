use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};

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
use crate::commands::SetModule;
use crate::commands::SetOrigin;

use crate::commands::DeleteGuide;
use crate::commands::DeleteInput;
use crate::commands::DeleteLabel;
use crate::commands::DeleteLight;
use crate::commands::DeleteOutput;
use crate::commands::DeleteParameter;
use crate::commands::DeleteWidget;

use crate::commands::ExportSVG;
use crate::commands::LoadProject;
use crate::commands::LoadScript;
use crate::commands::SaveProject;
use crate::commands::SaveScript;

pub trait Command {
    fn apply(&self, m: &mut Module, line: &Option<String>) -> bool;

    // fn new(data: &str) -> Result<Self, Box<dyn Error>>;
    // where
    //     Self: Sized;
}

pub struct Wrapper {
    command: Box<dyn Command>,
    src: Option<String>,
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
    decoration: Option<Entity>,
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

pub fn parse(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" {
        return new(json);
    }

    if v.action == "set" {
        return set(json);
    }

    if v.action == "delete" {
        return delete(json);
    }

    if v.action == "load" || v.action == "save" || v.action == "export" {
        return files(json);
    }

    return Err("unknown command".into());
}

fn new(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" && v.module.is_some() {
        let command = NewModule::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.input.is_some() {
        let command = NewInput::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.output.is_some() {
        let command = NewOutput::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.parameter.is_some() {
        let command = NewParameter::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.light.is_some() {
        let command = NewLight::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.widget.is_some() {
        let command = NewWidget::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.label.is_some() {
        let command = NewLabel::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.decoration.is_some() {
        let command = NewDecoration::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "new" && v.guide.is_some() {
        let command = NewGuide::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    return Err("invalid 'new' command".into());
}

fn set(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "set" && v.origin.is_some() {
        let command = SetOrigin::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "set" && v.module.is_some() {
        let command = SetModule::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "set" && v.background.is_some() {
        let command = SetBackground::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    return Err("invalid 'set' command".into());
}

fn delete(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "delete" && v.guide.is_some() {
        let command = DeleteGuide::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.input.is_some() {
        let command = DeleteInput::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.output.is_some() {
        let command = DeleteOutput::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.parameter.is_some() {
        let command = DeleteParameter::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.light.is_some() {
        let command = DeleteLight::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.widget.is_some() {
        let command = DeleteWidget::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "delete" && v.label.is_some() {
        let command = DeleteLabel::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    return Err("invalid 'delete' command".into());
}

fn files(json: &str) -> Result<Wrapper, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "load" && v.project.is_some() {
        let command = LoadProject::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "save" && v.project.is_some() {
        let command = SaveProject::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "load" && v.script.is_some() {
        let command = LoadScript::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "save" && v.script.is_some() {
        let command = SaveScript::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    if v.action == "export" && v.svg.is_some() {
        let command = ExportSVG::new(json)?;
        let boxed = Box::new(command) as Box<dyn Command>;
        let wrapper = Wrapper::new(boxed, v.src);

        return Ok(wrapper);
    }

    return Err("invalid command".into());
}

// fn create_command_and_wrapper<T: Command>(
//     json: &str,
//     src: Option<String>,
// ) -> Result<T, Box<dyn Error>> {
//     let command = T::new(json)?;
//     // let boxed = Box::new(command) as Box<dyn Command>;
//     // Ok(Wrapper::new(boxed, src))
// }

// pub fn parse(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
//     let v: Action = serde_json::from_str(json)?;
//
//     if v.action == "new" && v.module.is_some() {
//         return Ok(Box::new(NewModule::new(json)?));
//     }
//
//     if v.action == "new" && v.input.is_some() {
//         return Ok(Box::new(NewInput::new(json)?));
//     }
//
//     if v.action == "new" && v.output.is_some() {
//         return Ok(Box::new(NewOutput::new(json)?));
//     }
//
//     if v.action == "new" && v.parameter.is_some() {
//         return Ok(Box::new(NewParameter::new(json)?));
//     }
//
//     if v.action == "new" && v.light.is_some() {
//         return Ok(Box::new(NewLight::new(json)?));
//     }
//
//     if v.action == "new" && v.widget.is_some() {
//         return Ok(Box::new(NewWidget::new(json)?));
//     }
//
//     if v.action == "new" && v.label.is_some() {
//         return Ok(Box::new(NewLabel::new(json)?));
//     }
//
//     if v.action == "new" && v.guide.is_some() {
//         return Ok(Box::new(NewGuide::new(json)?));
//     }
//
//     if v.action == "set" && v.origin.is_some() {
//         return Ok(Box::new(SetOriginCommand::new(json)?));
//     }
//
//     if v.action == "set" && v.background.is_some() {
//         return Ok(Box::new(SetBackgroundCommand::new(json)?));
//     }
//
//     if v.action == "load" && v.project.is_some() {
//         return Ok(Box::new(LoadProject::new(json)?));
//     }
//
//     if v.action == "save" && v.project.is_some() {
//         return Ok(Box::new(SaveProject::new(json)?));
//     }
//
//     if v.action == "load" && v.script.is_some() {
//         return Ok(Box::new(LoadScript::new(json)?));
//     }
//
//     if v.action == "save" && v.script.is_some() {
//         return Ok(Box::new(SaveScript::new(json)?));
//     }
//
//     if v.action == "export" && v.svg.is_some() {
//         return Ok(Box::new(ExportSVG::new(json)?));
//     }
//
//     return Err("unknown command".into());
// }

impl Wrapper {
    pub fn new(command: Box<dyn Command>, src: Option<String>) -> Wrapper {
        Wrapper {
            command: command,
            src: src,
        }
    }

    pub fn apply(&self, m: &mut Module) -> bool {
        self.command.apply(m, &self.src)
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
