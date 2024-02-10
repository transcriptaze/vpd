use serde::{Deserialize, Serialize};

use std::error::Error;
use tera::Context;
use tera::Tera;

pub struct VCV {
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
    pub fn new() -> VCV {
        VCV {
            inputs: None,
            outputs: None,
            parameters: None,
            lights: None,
            widgets: None,
        }
    }

    pub fn _inputs(mut self, inputs: Vec<Component>) -> Self {
        self.inputs = Some(inputs);
        self
    }

    pub fn _outputs(mut self, outputs: Vec<Component>) -> Self {
        self.outputs = Some(outputs);
        self
    }

    pub fn _parameters(mut self, parameters: Vec<Component>) -> Self {
        self.parameters = Some(parameters);
        self
    }

    pub fn _lights(mut self, lights: Vec<Component>) -> Self {
        self.lights = Some(lights);
        self
    }

    pub fn _widgets(mut self, widgets: Vec<Component>) -> Self {
        self.widgets = Some(widgets);
        self
    }

    pub fn to_header(&self) -> Result<String, Box<dyn Error>> {
        let mut tera = Tera::default();
        let mut context = Context::new();

        load_templates(&mut tera);

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

fn load_templates(_tera: &mut Tera) {
    // let panel = include_str!("templates/panel.svg");
    // let mut styles = include_str!("templates/styles.svg");
    // let components = include_str!("templates/components.svg");
    // let mut backgrounds = include_str!("templates/backgrounds.svg");
    // let guidelines = include_str!("templates/guidelines.svg");
    // let labels = include_str!("templates/labels.svg");
    // let decorations = include_str!("templates/decorations.svg");
    // let overlay = include_str!("templates/overlay.svg");
    // let mut widgets = include_str!("templates/widgets.svg");

    // let mut circular_graduations = include_str!("templates/decorations/CircularGraduations.svg");
    // let mut pad = include_str!("templates/decorations/Pad.svg");

    // let mut screw = include_str!("templates/components/PanelScrew.svg");
    // let mut rbk = include_str!("templates/components/RoundBlackKnob.svg");
    // let mut pj301m = include_str!("templates/components/PJ301M.svg");

    // if theme == "dark" {
    //     styles = include_str!("templates/dark/styles.svg");
    //     backgrounds = include_str!("templates/dark/backgrounds.svg");
    //     widgets = include_str!("templates/dark/widgets.svg");

    //     circular_graduations = include_str!("templates/decorations/dark/CircularGraduations.svg");
    //     pad = include_str!("templates/decorations/dark/Pad.svg");

    //     screw = include_str!("templates/components/dark/PanelScrew.svg");
    //     rbk = include_str!("templates/components/dark/RoundBlackKnob.svg");
    //     pj301m = include_str!("templates/components/dark/PJ301M.svg");
    // }

    // tera.add_raw_template("panel", &panel).unwrap();
    // tera.add_raw_template("styles", &styles).unwrap();
    // tera.add_raw_template("components", &components).unwrap();
    // tera.add_raw_template("backgrounds", &backgrounds).unwrap();
    // tera.add_raw_template("labels", &labels).unwrap();
    // tera.add_raw_template("decorations", &decorations).unwrap();
    // tera.add_raw_template("guidelines", &guidelines).unwrap();
    // tera.add_raw_template("overlay", &overlay).unwrap();
    // tera.add_raw_template("widgets", &widgets).unwrap();

    // tera.add_raw_template("CircularGraduations", &circular_graduations)
    //     .unwrap();
    // tera.add_raw_template("Pad", &pad).unwrap();

    // tera.add_raw_template("PanelScrew", &screw).unwrap();
    // tera.add_raw_template("RoundBlackKnob", &rbk).unwrap();
    // tera.add_raw_template("PJ301M", &pj301m).unwrap();
}
