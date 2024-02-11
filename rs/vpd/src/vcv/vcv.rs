use serde::{Deserialize, Serialize};

use std::error::Error;
use tera::Context;
use tera::Tera;

pub struct VCV {
    _name: String,
    inputs: Option<Vec<Component>>,
    outputs: Option<Vec<Component>>,
    parameters: Option<Vec<Component>>,
    lights: Option<Vec<Component>>,
    widgets: Option<Vec<Component>>,
}

#[derive(Serialize, Deserialize)]
pub struct Component {
    name: String,
    x: f32,
    y: f32,
}

// TODO include_dir
//      https://crates.io/crates/include_dir
impl VCV {
    pub fn new(name: &str) -> VCV {
        VCV {
            _name: name.to_string(),
            inputs: None,
            outputs: None,
            parameters: None,
            lights: None,
            widgets: None,
        }
    }

    pub fn inputs(mut self, inputs: Vec<Component>) -> Self {
        self.inputs = Some(inputs);
        self
    }

    pub fn outputs(mut self, outputs: Vec<Component>) -> Self {
        self.outputs = Some(outputs);
        self
    }

    pub fn parameters(mut self, parameters: Vec<Component>) -> Self {
        self.parameters = Some(parameters);
        self
    }

    pub fn lights(mut self, lights: Vec<Component>) -> Self {
        self.lights = Some(lights);
        self
    }

    pub fn widgets(mut self, widgets: Vec<Component>) -> Self {
        self.widgets = Some(widgets);
        self
    }

    pub fn to_header(&self, prefix: &str) -> Result<String, Box<dyn Error>> {
        let mut tera = Tera::default();
        let mut context = Context::new();

        load_templates(&mut tera);

        context.insert("prefix", prefix);

        if let Some(v) = &self.inputs {
            context.insert("inputs", v);
        }

        if let Some(v) = &self.outputs {
            context.insert("outputs", v);
        }

        if let Some(v) = &self.parameters {
            context.insert("parameters", v);
        }

        if let Some(v) = &self.lights {
            context.insert("lights", v);
        }

        if let Some(v) = &self.widgets {
            context.insert("widgets", v);
        }

        let header = tera.render("header", &context).unwrap();

        return Ok(header.to_string());
    }
}

fn load_templates(tera: &mut Tera) {
    let header = include_str!("templates/header.h");

    tera.add_raw_template("header", &header).unwrap();
}

impl Component {
    pub fn new(name: &str, x: f32, y: f32) -> Component {
        Component {
            name: name.to_string(),
            x: x,
            y: y,
        }
    }
}
