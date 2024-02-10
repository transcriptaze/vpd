use std::io::Write;

use chrono::Local;
use flate2::write::GzEncoder;
use flate2::Compression;
use regex::Regex;

use super::panel::Panel;
use super::panel::DEFAULT_HEIGHT;
use super::panel::DEFAULT_WIDTH;
use super::serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use crate::svg;
use crate::utils::log;
use crate::warnf;
use svg::PrettyPrinter;

const VERSION: u32 = 1;
const RADIUS: f32 = 2.5;

#[wasm_bindgen(raw_module = "../../javascript/fs.js")]
extern "C" {
    fn load(filetype: &str);
    fn save(filetype: &str, filename: &str, blob: &[u8]);
}

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub version: u32,
    pub name: String,
    pub panel: Panel,
    pub script: Vec<String>,
}

#[derive(Serialize, Deserialize)]
pub struct ModuleInfo {
    pub name: String,
    pub height: f32,
    pub width: f32,
}

pub trait IItem {
    fn as_item(&self) -> Item;
}

#[derive(Serialize)]
pub struct Item {
    pub itype: String,
    pub id: String,
    pub name: String,
    pub attributes: Vec<(String, String)>,
}

pub fn new() -> Module {
    return Module {
        version: VERSION,
        name: "unknown".into(),
        panel: Panel::new(DEFAULT_WIDTH, DEFAULT_HEIGHT),
        script: Vec::new(),
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

    pub fn load_project(&self) {
        load("vpd");
    }

    pub fn save_project(&self, timestamp: bool, gzip: bool) {
        let filename = match (timestamp, gzip) {
            (true, true) => {
                let now = Local::now();
                let timestamp = now.format("%Y-%m-%d %H.%M.%S");
                format!("{} {}.vpz", self.name, &timestamp)
            }

            (true, false) => {
                let now = Local::now();
                let timestamp = now.format("%Y-%m-%d %H.%M.%S");
                format!("{} {}.vpd", self.name, &timestamp)
            }

            (_, true) => format!("{}.vpz", self.name),
            (_, _) => format!("{}.vpd", self.name),
        };

        let blob = serde_json::to_string_pretty(self).unwrap();

        match gzip {
            true => {
                let mut e = GzEncoder::new(Vec::new(), Compression::default());
                e.write_all(blob.as_bytes()).unwrap();
                let bytes = e.finish().unwrap();
                save("vpz", &filename, &bytes);
            }

            _ => save("vpd", &filename, blob.as_bytes()),
        }
    }

    pub fn load_script(&self) {
        load("vpx");
    }

    pub fn save_script(&self, timestamp: bool) {
        let filename = match timestamp {
            true => {
                let now = Local::now();
                let timestamp = now.format("%Y-%m-%d %H.%M.%S");
                format!("{} {}.vpx", self.name, &timestamp)
            }

            _ => format!("{}.vpx", self.name),
        };

        let blob = &self.script.join("\n");

        save("vpx", &filename, blob.as_bytes());
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

                save("svg", &filename, blob.as_bytes());
            }
            Err(e) => warnf!("error generating SVG '{:?}'", e),
        }
    }

    pub fn export_header(&self) {
        match self.panel.export_header() {
            Ok(header) => {
                // let pp = PrettyPrinter::new();
                // let blob = pp.prettify(&svg);
                let blob = header.to_string();
                let filename = format!("{}.h", self.name);

                save(".h", &filename, blob.as_bytes());
            }
            Err(e) => warnf!("error generating C++ header file '{:?}'", e),
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

    pub fn new_label_id(&self) -> String {
        let re = Regex::new(r"(t)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.labels {
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

        format!("t{}", ix + 1)
    }

    pub fn new_decoration_id(&self) -> String {
        let re = Regex::new(r"(d)(\d+)").unwrap();
        let mut ix: i32 = 0;

        for k in &self.panel.decorations {
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

        format!("d{}", ix + 1)
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

    pub fn find_input(&self, id: &str) -> Option<usize> {
        match self.panel.inputs.iter().position(|v| v.id == id) {
            Some(ix) => Some(ix),
            None => self
                .panel
                .inputs
                .iter()
                .position(|v| v.name.trim().to_lowercase() == id.trim().to_lowercase()),
        }
    }

    pub fn find_output(&self, id: &str) -> Option<usize> {
        match self.panel.outputs.iter().position(|v| v.id == id) {
            Some(ix) => Some(ix),
            None => self
                .panel
                .outputs
                .iter()
                .position(|v| v.name.trim().to_lowercase() == id.trim().to_lowercase()),
        }
    }

    pub fn migrate(&mut self, tag: &str, from: &str, to: &str) {
        let old = format!("{}<{}>", tag, from);
        let new = format!("{}<{}>", tag, to);

        // FIXME migrate inputs
        // FIXME migrate outputs
        // FIXME migrate parameters
        // FIXME migrate lights
        // FIXME migrate widgets
        // FIXME migrate labels

        for v in &mut self.panel.decorations {
            v.migrate(&old, &new);
        }
    }

    pub fn query(&self, x: f32, y: f32) -> Vec<Item> {
        let panel = &self.panel;
        let mut rs = Vec::<Item>::new();

        for v in &self.panel.inputs {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.outputs {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.parameters {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.lights {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.widgets {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.labels {
            let mut vx = v.x.resolve(panel);
            let mut vy = v.y.resolve(panel);

            vx += match v.halign.as_str() {
                "left" => 0.0,
                "centre" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
                "center" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
                "right" => -v.path.bounds.x2,
                _ => 0.0,
            };

            vy += match v.valign.as_str() {
                "top" => -v.path.bounds.y1,
                "middle" => -(v.path.bounds.y1 + v.path.bounds.y2) / 2.0,
                "baseline" => 0.0,
                "bottom" => -v.path.bounds.y2,
                _ => 0.0,
            };

            let x1 = vx + v.path.bounds.x1;
            let x2 = vx + v.path.bounds.x2;
            let y1 = vy + v.path.bounds.y1;
            let y2 = vy + v.path.bounds.y2;

            if x >= x1 && x <= x2 && y >= y1 && y <= y2 {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.decorations {
            let dx = v.x.resolve(panel) - x;
            let dy = v.y.resolve(panel) - y;
            let r = (dx * dx + dy * dy).sqrt();

            if r < RADIUS {
                rs.push(v.as_item());
            }
        }

        return rs;
    }
}
