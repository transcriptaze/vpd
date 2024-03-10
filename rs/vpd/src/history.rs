use super::serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize)]
pub struct History {
    stack: Vec<Item>,
}

#[derive(Serialize, Deserialize)]
pub struct Item {
    pub cmd: String,
    pub blob: String,
}

pub fn new() -> History {
    History { stack: vec![] }
}

impl History {
    pub fn push(&mut self, cmd: &str, blob: &str) {
        self.stack.push(Item::new(cmd, blob));
    }

    pub fn pop(&mut self) -> Option<(String, String)> {
        if let Some(v) = self.stack.pop() {
            Some((v.cmd, v.blob))
        } else {
            None
        }
    }
}

impl Item {
    pub fn new(cmd: &str, blob: &str) -> Item {
        Item {
            cmd: cmd.to_string(),
            blob: blob.to_string(),
        }
    }
}
