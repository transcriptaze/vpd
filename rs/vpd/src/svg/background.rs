use regex::Regex;
use serde::{Deserialize, Serialize};

const BACKGROUNDS: [&'static str; 3] = ["rgb", "rgba", "foundation"];

#[derive(Serialize, Deserialize, Debug)]
pub struct Background {
    pub template: String,
}

impl Background {
    pub fn new(name: &str) -> Background {
        let template = match BACKGROUNDS
            .iter()
            .find(|v| normalise(*v) == normalise(&name))
        {
            Some(p) => p,
            None => "default",
        };

        Background {
            template: template.to_string(),
        }
    }
}

fn normalise(v: &str) -> String {
    Regex::new(r#"\s+"#)
        .unwrap()
        .replace_all(v, "")
        .to_lowercase()
}
