use std::io::Read;
use std::io::Write;

use chrono::Local;
use flate2::read::GzDecoder;
use flate2::write::GzEncoder;
use flate2::Compression;
use regex::Regex;

use super::panel;
use super::panel::Guide;
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

#[wasm_bindgen(raw_module = "../../javascript/api.js")]
extern "C" {
    fn load(filetype: &str);
    fn unload(filetype: &str, name: &str);
    fn save(filetype: &str, filename: &str, blob: &[u8]);
    fn list(filetype: &str, list: &str);
}

#[derive(Serialize, Deserialize)]
pub struct Module {
    pub version: u32,
    pub name: String,
    pub panel: Panel,
    pub script: Vec<String>,
}

#[derive(Serialize)]
pub struct Info {
    pub name: String,
    pub height: f32,
    pub width: f32,
}

pub trait IQueryable {
    fn at(&self, panel: &Panel, x: f32, y: f32) -> bool;
}

pub trait IItem {
    fn as_item(&self) -> Item;
}

pub trait Is {
    fn is(&self, id: &str) -> bool;
    fn named(&self, name: &str) -> bool;
}

pub trait ISet {
    fn set_offset(&mut self, offset: &Option<panel::Offset>);
}

#[derive(Serialize)]
pub struct Item {
    pub itype: String,
    pub id: String,
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
    pub fn info(&self) -> Info {
        Info {
            name: self.name.to_string(),
            height: self.panel.height,
            width: self.panel.width,
        }
    }

    pub fn gzip(&self) -> Vec<u8> {
        let blob = serde_json::to_string_pretty(self).unwrap();
        let mut gz = GzEncoder::new(Vec::new(), Compression::default());

        gz.write_all(blob.as_bytes()).unwrap();

        return gz.finish().unwrap();
    }

    pub fn gunzip(&mut self, bytes: &[u8]) {
        let mut gz = GzDecoder::new(&bytes[..]);
        let mut json = String::new();

        match gz.read_to_string(&mut json) {
            Ok(_) => {
                let rs: Result<Module, serde_json::Error> = serde_json::from_str(&json);

                match rs {
                    Ok(module) => {
                        *self = module;
                    }

                    Err(e) => {
                        warnf!("error deserializing project ({})", e);
                    }
                }
            }

            Err(e) => {
                warnf!("error deserializing project ({})", e);
            }
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

    pub fn load_font(&self) {
        load("font");
    }

    pub fn unload_font(&self, font: &str) {
        unload("font", font);
    }

    pub fn list_fonts<T: Serialize>(&self, object: &T) {
        let json = serde_json::to_string(&object).unwrap();

        list("fonts", &json);
    }

    pub fn list_parts<T: Serialize>(&self, object: &T) {
        let json = serde_json::to_string(&object).unwrap();

        list("parts", &json);
    }

    pub fn list_decorations<T: Serialize>(&self, object: &T) {
        let json = serde_json::to_string(&object).unwrap();

        list("decorations", &json);
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
        let prefix = Regex::new(r#"[^a-zA-Z0-9]+"#)
            .unwrap()
            .replace_all(&self.name, "_")
            .to_uppercase();

        match self.panel.export_header(&self.name, &prefix) {
            Ok(header) => {
                // let pp = PrettyPrinter::new();
                // let blob = pp.prettify(&svg);
                let blob = header.to_string();
                let filename = format!("{}_widget.h", self.name);

                save(".h", &filename, blob.as_bytes());
            }
            Err(e) => warnf!("error generating C++ header file '{:?}'", e),
        }
    }

    pub fn export_helper(&self) {
        let name = Regex::new(r#"[^a-zA-Z0-9_-]+"#)
            .unwrap()
            .replace_all(&self.name, "_");

        let sh = format!(
            "$RACK_DIR/helper.py createmodule {0} res/{0}.svg src/{0}.cpp",
            &name
        );

        save(">>", "<clipboard>", sh.as_bytes());
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

    pub fn find_reference(&self, reference: &str) -> Option<(String, String, String)> {
        let re = Regex::new(r#"(input|output|parameter|light|widget)<(.*?)>"#).unwrap();

        if let Some(captures) = re.captures(reference) {
            let u = &captures[1];
            let id = &captures[2];

            match u {
                "input" => {
                    if let Some(ix) = self.find_input(&id) {
                        let v = &self.panel.inputs[ix];
                        return Some((u.to_string(), v.id.clone(), v.name.clone()));
                    }
                }

                "output" => {
                    if let Some(ix) = self.find_output(&id) {
                        let v = &self.panel.outputs[ix];
                        return Some((u.to_string(), v.id.clone(), v.name.clone()));
                    }
                }

                "parameter" => {
                    if let Some(ix) = self.find_parameter(&id) {
                        let v = &self.panel.parameters[ix];
                        return Some((u.to_string(), v.id.clone(), v.name.clone()));
                    }
                }

                "light" => {
                    if let Some(ix) = self.find_light(&id) {
                        let v = &self.panel.lights[ix];
                        return Some((u.to_string(), v.id.clone(), v.name.clone()));
                    }
                }

                "widget" => {
                    if let Some(ix) = self.find_widget(&id) {
                        let v = &self.panel.widgets[ix];
                        return Some((u.to_string(), v.id.clone(), v.name.clone()));
                    }
                }

                _ => {
                    return None;
                }
            }
        };

        None
    }

    pub fn find_input(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.inputs, id)
    }

    pub fn find_output(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.outputs, id)
    }

    pub fn find_parameter(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.parameters, id)
    }

    pub fn find_light(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.lights, id)
    }

    pub fn find_widget(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.widgets, id)
    }

    pub fn find_label(&self, id: &str) -> Option<usize> {
        self.find_in_list(&self.panel.labels, id)
    }

    fn find_in_list<T: Is>(&self, list: &Vec<T>, id: &str) -> Option<usize> {
        let name = id.trim().to_lowercase();

        if let Some(ix) = list.iter().position(|v| v.is(id)) {
            Some(ix)
        } else {
            list.iter().position(|v| v.named(name.as_str()))
        }
    }

    pub fn find_decoration(
        &self,
        id: &Option<String>,
        reference: &Option<String>,
        name: &Option<String>,
    ) -> Option<usize> {
        match (id, reference, name) {
            (Some(id), _, _) => self.panel.decorations.iter().position(|v| v.is(id)),

            (None, Some(component), Some(name)) => {
                let c = component.as_str();
                let n = name.trim().to_lowercase();

                self.panel
                    .decorations
                    .iter()
                    .position(|v| v.decorates(&self, c) && v.named(&n))
            }
            _ => None,
        }
    }

    pub fn find_guide(&mut self, id: &str) -> Option<&mut Guide> {
        self.panel.guides.get_mut(id)
    }

    pub fn migrate(&mut self, tag: &str, from: &str, to: &str) {
        let old = match tag {
            "guide" => format!("{}", from),
            _ => format!("{}<{}>", tag, from),
        };

        let new = match tag {
            "guide" => format!("{}", to),
            _ => format!("{}<{}>", tag, to),
        };

        for v in &mut self.panel.inputs {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.outputs {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.parameters {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.lights {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.widgets {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.labels {
            v.migrate(&old, &new);
        }

        for v in &mut self.panel.decorations {
            v.migrate(&old, &new);
        }

        for (_, v) in &mut self.panel.guides {
            v.migrate(&old, &new);
        }
    }

    pub fn query(&self, x: f32, y: f32) -> Vec<Item> {
        let panel = &self.panel;
        let mut rs = Vec::<Item>::new();

        for (_, v) in &self.panel.guides {
            if let Some(gx) = &v.x {
                if y < 0.0 {
                    let dx = gx.resolve(panel) - x;
                    let dy = 0.0;
                    let r = (dx * dx + dy * dy).sqrt();

                    if r < RADIUS {
                        rs.push(v.as_item());
                    }
                }
            }

            if let Some(gy) = &v.y {
                if x < 0.0 {
                    let dx = 0.0;
                    let dy = gy.resolve(panel) - y;
                    let r = (dx * dx + dy * dy).sqrt();

                    if r < RADIUS {
                        rs.push(v.as_item());
                    }
                }
            }
        }

        for v in &self.panel.inputs {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.outputs {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.parameters {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.lights {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.widgets {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
        }

        for v in &self.panel.labels {
            if v.at(&self.panel, x, y) {
                rs.push(v.as_item());
            }
            // let mut vx = v.x.resolve(panel);
            // let mut vy = v.y.resolve(panel);

            // vx += match v.halign.as_str() {
            //     "left" => 0.0,
            //     "centre" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
            //     "center" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
            //     "right" => -v.path.bounds.x2,
            //     _ => 0.0,
            // };

            // vy += match v.valign.as_str() {
            //     "top" => -v.path.bounds.y1,
            //     "middle" => -(v.path.bounds.y1 + v.path.bounds.y2) / 2.0,
            //     "baseline" => 0.0,
            //     "bottom" => -v.path.bounds.y2,
            //     _ => 0.0,
            // };

            // let x1 = vx + v.path.bounds.x1;
            // let x2 = vx + v.path.bounds.x2;
            // let y1 = vy + v.path.bounds.y1;
            // let y2 = vy + v.path.bounds.y2;

            // if x >= x1 && x <= x2 && y >= y1 && y <= y2 {
            //     rs.push(v.as_item());
            // }
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
