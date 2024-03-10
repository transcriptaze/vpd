use super::serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct Stack {
    stack: Vec<StackItem>,
}

#[derive(Serialize, Deserialize)]
pub struct StackItem {
    pub cmd: String,
    pub blob: Vec<u8>,
}

pub fn new() -> Stack {
    Stack { stack: vec![] }
}

impl Stack {
    pub fn push(&mut self, cmd: &str, blob: &[u8]) {
        let item = StackItem::new(cmd, blob);

        self.stack.push(item);
    }
}

impl StackItem {
    pub fn new(cmd: &str, blob: &[u8]) -> StackItem {
        StackItem {
            cmd: cmd.to_string(),
            blob: blob.to_vec(),
        }
    }
}
