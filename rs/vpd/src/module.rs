use regex::Regex;

use super::panel::Panel;
use super::panel::DEFAULT_HEIGHT;
use super::panel::DEFAULT_WIDTH;
use super::serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use svg::PrettyPrinter;
use crate::svg;
use crate::utils::log;
use crate::warnf;

#[wasm_bindgen(raw_module = "../../javascript/fs.js")]
extern "C" {
    fn load(filetype: &str);
    fn save(text: &str, blob: &str);
}

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub name: Box<str>,
    pub panel: Panel,
}

#[derive(Serialize, Deserialize)]
pub struct ModuleInfo {
    #[serde(rename = "name")]
    pub name: String,

    #[serde(rename = "height")]
    pub height: f32,

    #[serde(rename = "width")]
    pub width: f32,
}

pub fn new() -> Module {
    return Module {
        name: "unknown".into(),
        panel: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
    };
}

impl Module {
    pub fn info(&self) -> ModuleInfo {
        ModuleInfo {
            name: self.name.to_string(),
            height: self.panel.height,
            width: self.panel.width,
        }
    }

    pub fn load_script(&self) {
        load("vpx");
    }

    pub fn export_svg(&self, theme: &str) {
        match self.panel.export_SVG(theme) {
            Ok(svg) => {
                let pp = PrettyPrinter::new();
                let blob = pp.prettify(&svg);

                let filename = match theme {
                    "dark" => format!("{}-dark.svg", self.name),
                    _ => format!("{}.svg", self.name),
                };

                save(&filename, &blob);
            }
            Err(e) => warnf!("error generating SVG '{:?}'", e),
        }
    }

    pub fn new_input_id(&self) -> String {
        let re = Regex::new(r"(i)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.inputs {
            match re.captures(&k.id) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        format!("i{}", ix + 1)
    }

    pub fn new_output_id(&self) -> String {
        let re = Regex::new(r"(o)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.outputs {
            match re.captures(&k.id) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        format!("o{}", ix + 1)
    }

    pub fn new_parameter_id(&self) -> String {
        let re = Regex::new(r"(p)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.parameters {
            match re.captures(&k.id) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        format!("p{}", ix + 1)
    }

    pub fn new_light_id(&self) -> String {
        let re = Regex::new(r"(l)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.lights {
            match re.captures(&k.id) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        format!("l{}", ix + 1)
    }

    pub fn new_widget_id(&self) -> String {
        let re = Regex::new(r"(w)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.widgets {
            match re.captures(&k.id) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        format!("w{}", ix + 1)
    }

    pub fn new_guide_id(&self, orientation: &str, reference: &str) -> String {
        let re = match (orientation, reference) {
            ("vertical", _) => Regex::new(r"(v)(\d+)").unwrap(),
            ("horizontal", _) => Regex::new(r"(h)(\d+)").unwrap(),
            _ => match Regex::new(r"^([a-zA-Z]+)(\d+)$")
                .unwrap()
                .captures(reference)
            {
                Some(captures) => {
                    let prefix = captures.get(1).unwrap().as_str();
                    let exp = format!(r"^({})(\d+)$", &prefix);
                    Regex::new(&exp).unwrap()
                }
                None => Regex::new(r"(g)(\d+)").unwrap(),
            },
        };

        let mut ix: i32 = 0;

        for k in self.panel.guides.keys() {
            match re.captures(k) {
                Some(captures) => {
                    let v = captures.get(2).unwrap().as_str();
                    let i = v.parse::<i32>().unwrap();

                    if i > ix {
                        ix = i;
                    }
                }

                None => {}
            }
        }

        match orientation {
            "vertical" => format!("v{}", ix + 1),
            "horizontal" => format!("h{}", ix + 1),
            _ => match re.captures(reference) {
                Some(v) => format!("{}{}", v.get(1).unwrap().as_str(), ix + 1),
                None => format!("g{}", ix + 1),
            },
        }
    }
}
