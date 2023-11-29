use super::serde::{Deserialize, Serialize};
use std::error::Error;

#[derive(Debug)]
pub struct Command {}

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

#[derive(Serialize, Deserialize, Debug)]
#[allow(non_camel_case_types)]
struct command {
    action: String,
}

pub fn new(json: &str) -> Result<Command, Box<dyn Error>> {
    let rs: Result<command, serde_json::Error> = serde_json::from_str(json);

    match rs {
        Ok(c) => {
            if c.action == "new" {
                Ok(Command {})
            } else {
                Err(format!("unknown command {:?}", c.action).into())
            }
        }

        Err(e) => Err(format!("{:?}", e).into()),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_new() {
        let json = r#"{
            "action": "new"
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
