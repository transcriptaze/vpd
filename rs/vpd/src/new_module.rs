use super::command::Command;
use super::module::Module;

#[derive(Debug)]
pub struct NewModuleCommand {}

impl Command for NewModuleCommand {
    fn apply(&self, m: &mut Module) {
        m.name = "qute".into();
    }
}
