use std::collections::VecDeque;
use std::io::Read;
use std::str;
use std::io::Write;

use super::serde::{Deserialize, Serialize};
use flate2::read::GzDecoder;
use flate2::write::GzEncoder;
use flate2::Compression;

use crate::utils::log;
use crate::warnf;

const MAX_HISTORY: usize = 64;

#[derive(Serialize, Deserialize)]
pub struct History {
    undo: VecDeque<Item>,
    redo: VecDeque<Item>,
}

#[derive(Serialize)]
pub struct Info {
    pub undo: usize,
    pub redo: usize,
}

#[derive(Serialize, Deserialize)]
pub struct Item {
    pub cmd: String,
    pub blob: String,
}

pub fn new() -> History {
    History {
        undo: vec![].into(),
        redo: vec![].into(),
    }
}

impl History {
    pub fn push(&mut self, cmd: &str, blob: &str) {
        self.undo.push_front(Item::new(cmd, blob));

        while self.undo.len() > MAX_HISTORY {
            self.undo.pop_back();
        }
    }

    pub fn pop(&mut self) -> Option<(String, String)> {
        if let Some(v) = self.undo.pop_front() {
            Some((v.cmd, v.blob))
        } else {
            None
        }
    }

    pub fn serialize(&self) -> Vec<u8> {
        let blob = serde_json::to_string_pretty(self).unwrap();
        let mut gz = GzEncoder::new(Vec::new(), Compression::default());
        
        gz.write_all(blob.as_bytes()).unwrap();
        
        return gz.finish().unwrap();
    }

    pub fn deserialize(&mut self, bytes: &[u8]) {
        let mut gz = GzDecoder::new(&bytes[..]);
        let mut json = String::new();
        
        self.undo.clear();
        
        match gz.read_to_string(&mut json) {
            Ok(_) => {
                let rs: Result<History, serde_json::Error> = serde_json::from_str(&json);
        
                match rs {
                    Ok(history) => {
                        self.undo = history.undo;
                    }
        
                    Err(e) => {
                        warnf!("error deserializing undo history ({})", e);
                    }
                }
            }
        
            Err(e) => {
                warnf!("error deserializing undo history ({})", e);
            }
        }
    }

    pub fn info(&self) -> Info {
        Info {
            undo: self.undo.len(),
            redo: self.redo.len(),
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
