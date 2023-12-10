use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};

use crate::commands::NewGuideCommand;
use crate::commands::NewModuleCommand;

pub trait Command {
    fn apply(&self, m: &mut Module);
}

#[derive(Serialize, Deserialize, Debug)]
struct Action {
    action: String,
    module: Option<Entity>,
    guide: Option<Entity>,
}

#[derive(Serialize, Deserialize, Debug)]
struct Entity {}

pub fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Action = serde_json::from_str(json)?;

    if v.action == "new" && v.module.is_some() {
        Ok(Box::new(NewModuleCommand::new(json)?))
    } else if v.action == "new" && v.guide.is_some() {
        Ok(Box::new(NewGuideCommand::new(json)?))
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
