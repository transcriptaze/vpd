// use std::error::Error;

use super::module::Module;
use super::new_module::NewModuleCommand;
use super::serde::{Deserialize, Serialize};
use serde_json::Value;

pub trait Command {
    fn apply(&self, m: &mut Module);
}

#[derive(Serialize, Deserialize, Debug)]
#[allow(non_camel_case_types)]
struct command {
    action: String,
}

// #[derive(Debug)]
// pub enum CommandError {
//     UnknownCommand,
// }
//
// impl std::error::Error for CommandError {}
//
// impl fmt::Display for CommandError {
//     fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
//         match self {
//             CommandError::UnknownCommand => write!(f, "unknown command"),
//         }
//     }
// }

// pub fn new(json: &str) -> Result<Box<dyn Command, Box<dyn Error>> {

pub fn new(json: &str) -> Option<Box<dyn Command>> {
    let rs: Result<Value, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(v) => match v.get("action") {
            Some(a) => {
                if a == "new" {
                    // Ok(new_module::NewModuleCommand {})
                    Some(Box::new(NewModuleCommand {}))
                } else {
                    // Err(format!("unknown 'action' {:?}", a).into())
                    None
                }
            }
            None => None, // Err("missing 'action' field".into()),
        },

        Err(_e) => None, // Err(format!("{:?}", e).into()),
    }

    // let rs: Result<command, serde_json::Error> = serde_json::from_str(json);
    //
    // match rs {
    //     Ok(c) => {
    //         if c.action == "new" {
    //             Ok(Command {})
    //         } else {
    //             Err(format!("unknown command {:?}", c.action).into())
    //         }
    //     }
    //
    //     Err(e) => Err(format!("{:?}", e).into()),
    // }

    // Ok(Command {})
}

// impl Command {
//     pub fn apply(&self, m: &mut Module) {
//         m.name = "zoot".into();
//     }
// }

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
            Ok(_) => {
                // assert!(false, "ooops");
            }
            Err(e) => {
                assert!(false, "{}", e.to_string());
            }
        }
    }
}
