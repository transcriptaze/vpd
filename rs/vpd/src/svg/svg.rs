use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::Circle;
use crate::svg::GuideLine;
use crate::svg::Part;
use crate::svg::Point;
use crate::svg::PrettyPrinter;
use crate::svg::Rect;
use crate::svg::Style;
use crate::svg::Text;

const OUTLINE_STROKE: f32 = 0.125;

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    panel: Rect,
    styles: Option<Vec<Style>>,
    background: Option<Rect>,
    outline: Option<Rect>,
    origin: Option<Point>,
    guidelines: Option<Vec<GuideLine>>,
    inputs: Option<Vec<Circle>>,
    outputs: Option<Vec<Circle>>,
    parameters: Option<Vec<Circle>>,
    lights: Option<Vec<Circle>>,
    labels: Option<Vec<Text>>,
    parts: Option<Vec<Part>>,
    overlay: bool,
}

// TODO include_dir
//      https://crates.io/crates/include_dir
impl SVG {
    pub fn new(width: f32, height: f32, viewport: &Rect, panel: &Rect) -> SVG {
        SVG {
            width: width,
            height: height,
            viewport: viewport.clone(),
            panel: panel.clone(),
            styles: None,
            background: None,
            outline: None,
            origin: None,
            guidelines: None,
            inputs: None,
            outputs: None,
            parameters: None,
            lights: None,
            labels: None,
            parts: None,
            overlay: true,
        }
    }

    pub fn styles(mut self, styles: Vec<Style>) -> Self {
        self.styles = Some(styles);
        self
    }

    pub fn background(mut self, bg: Rect) -> Self {
        self.background = Some(bg);
        self
    }

    pub fn outline(mut self, outline: &Rect) -> Self {
        self.outline = Some(Rect {
            x: outline.x - OUTLINE_STROKE / 2.0,
            y: outline.y - OUTLINE_STROKE / 2.0,
            width: outline.width,
            height: outline.height,
        });
        self
    }

    pub fn origin(mut self, pt: Point) -> Self {
        self.origin = Some(pt);
        self
    }

    pub fn guidelines(mut self, guidelines: Vec<GuideLine>) -> Self {
        self.guidelines = Some(guidelines);
        self
    }

    pub fn inputs(mut self, inputs: Vec<Circle>) -> Self {
        self.inputs = Some(inputs);
        self
    }

    pub fn outputs(mut self, outputs: Vec<Circle>) -> Self {
        self.outputs = Some(outputs);
        self
    }

    pub fn parameters(mut self, parameters: Vec<Circle>) -> Self {
        self.parameters = Some(parameters);
        self
    }

    pub fn lights(mut self, lights: Vec<Circle>) -> Self {
        self.lights = Some(lights);
        self
    }

    pub fn labels(mut self, labels: Vec<Text>) -> Self {
        self.labels = Some(labels);
        self
    }

    pub fn parts(mut self, parts: Vec<Part>) -> Self {
        self.parts = Some(parts);
        self
    }

    pub fn overlay(mut self, overlay: bool) -> Self {
        self.overlay = overlay;
        self
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, theme: &str) -> Result<String, Box<dyn Error>> {
        let mut tera = Tera::default();
        let mut context = Context::new();

        load_templates(&mut tera, theme);

        context.insert("width", &format!("{:3}", self.width));
        context.insert("height", &format!("{:3}", self.height));
        context.insert("viewport", &self.viewport);
        context.insert("panel", &self.panel);
        context.insert("overlay", &self.overlay);
        context.insert("theme", &theme);

        match &self.styles {
            Some(_) => context.insert("styles", "yes"),
            _ => context.insert("styles", "no"),
        }

        match &self.background {
            Some(v) => context.insert("background", &v),
            _ => {}
        }

        match &self.outline {
            Some(v) => context.insert("outline", &v),
            _ => {}
        }

        match &self.origin {
            Some(v) => context.insert("origin", &v),
            _ => {}
        }

        match &self.guidelines {
            Some(v) => context.insert("guidelines", &v),
            _ => {}
        }

        match &self.inputs {
            Some(v) => context.insert("inputs", &v),
            _ => {}
        }

        match &self.outputs {
            Some(v) => context.insert("outputs", &v),
            _ => {}
        }

        match &self.parameters {
            Some(v) => context.insert("parameters", &v),
            _ => {}
        }

        match &self.lights {
            Some(v) => context.insert("lights", &v),
            _ => {}
        }

        match &self.labels {
            Some(v) => context.insert("labels", &v),
            _ => {}
        }

        match &self.parts {
            Some(v) => context.insert("parts", &v),
            _ => {}
        }

        let svg = tera.render("panel", &context).unwrap();
        let pp = PrettyPrinter::new();

        Ok(pp.prettify(&svg))
    }
}

fn load_templates(tera: &mut Tera, theme: &str) {
    let panel = include_str!("templates/panel.svg");
    let mut styles = include_str!("templates/styles.svg");
    let components = include_str!("templates/components.svg");
    let mut backgrounds = include_str!("templates/backgrounds.svg");
    let guidelines = include_str!("templates/guidelines.svg");
    let labels = include_str!("templates/labels.svg");
    let overlay = include_str!("templates/overlay.svg");
    let mut widgets = include_str!("templates/widgets.svg");

    let mut screw = include_str!("templates/components/PanelScrew.svg");
    let mut rbk = include_str!("templates/components/RoundBlackKnob.svg");
    let mut pj301m = include_str!("templates/components/PJ301M.svg");

    if theme == "dark" {
        styles = include_str!("templates/dark/styles.svg");
        backgrounds = include_str!("templates/dark/backgrounds.svg");
        widgets = include_str!("templates/dark/widgets.svg");

        screw = include_str!("templates/components/dark/PanelScrew.svg");
        rbk = include_str!("templates/components/dark/RoundBlackKnob.svg");
        pj301m = include_str!("templates/components/dark/PJ301M.svg");
    }

    tera.add_raw_template("panel", &panel).unwrap();
    tera.add_raw_template("styles", &styles).unwrap();
    tera.add_raw_template("components", &components).unwrap();
    tera.add_raw_template("backgrounds", &backgrounds).unwrap();
    tera.add_raw_template("labels", &labels).unwrap();
    tera.add_raw_template("guidelines", &guidelines).unwrap();
    tera.add_raw_template("overlay", &overlay).unwrap();
    tera.add_raw_template("widgets", &widgets).unwrap();

    tera.add_raw_template("PanelScrew", &screw).unwrap();
    tera.add_raw_template("RoundBlackKnob", &rbk).unwrap();
    tera.add_raw_template("PJ301M", &pj301m).unwrap();
}
