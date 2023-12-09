use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};
use serde_json::Value;

use crate::commands::NewModuleCommand;

pub trait Command {
    fn apply(&self, m: &mut Module);
}

#[derive(Serialize, Deserialize, Debug)]
#[allow(non_camel_case_types)]
struct command {
    action: String,
}

pub fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let v: Value = serde_json::from_str(json)?;

    match v.get("action") {
        Some(a) => {
            if a == "new" {
                let c = NewModuleCommand::new(json)?;

                Ok(Box::new(c))
            } else {
                Err(format!("unknown 'action' {:?}", a).into())
            }
        }
        None => Err("missing 'action' field".into()),
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
