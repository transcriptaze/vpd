use crate::command::Command;
use crate::module::Module;

#[derive(Debug)]
pub struct NewModuleCommand {}

pub fn make_new_module_command(_json: &str) -> NewModuleCommand {
    // let rs: Result<Value, serde_json::Error> = serde_json::from_str(json);
    //
    // match rs {
    //     Ok(_v) => NewModuleCommand(),
    //     Err(_e) => None,
    // }

    NewModuleCommand {}
}

impl Command for NewModuleCommand {
    fn apply(&self, m: &mut Module) {
        m.name = "kwitequte".into();
    }
}
