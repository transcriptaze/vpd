use std::collections::VecDeque;

use super::serde::{Deserialize, Serialize};

const MAX_HISTORY: usize = 64;

#[derive(Serialize, Deserialize)]
pub struct History {
    stack: VecDeque<Item>,
}

#[derive(Serialize, Deserialize)]
pub struct Item {
    pub cmd: String,
    pub blob: String,
}

pub fn new() -> History {
    History {
        stack: vec![].into(),
    }
}

impl History {
    pub fn push(&mut self, cmd: &str, blob: &str) {
        self.stack.push_front(Item::new(cmd, blob));

        while self.stack.len() > MAX_HISTORY {
            self.stack.pop_back();
        }
    }

    pub fn pop(&mut self) -> Option<(String, String)> {
        if let Some(v) = self.stack.pop_front() {
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
