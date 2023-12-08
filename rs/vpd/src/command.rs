use std::error::Error;

use super::module::Module;
use super::serde::{Deserialize, Serialize};
use serde_json::Value;

use crate::commands::make_new_module_command;

pub trait Command {
    fn apply(&self, m: &mut Module);
}

#[derive(Serialize, Deserialize, Debug)]
#[allow(non_camel_case_types)]
struct command {
    action: String,
}

pub fn new(json: &str) -> Result<Box<dyn Command>, Box<dyn Error>> {
    let rs: Result<Value, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(v) => match v.get("action") {
            Some(a) => {
                if a == "new" {
                    Ok(Box::new(make_new_module_command(json)))
                } else {
                    Err(format!("unknown 'action' {:?}", a).into())
                }
            }
            None => Err("missing 'action' field".into()),
        },

        Err(e) => Err(format!("{:?}", e).into()),
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
