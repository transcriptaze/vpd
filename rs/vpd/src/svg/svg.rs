use std::error::Error;
use tera::Context;
use tera::Tera;

use crate::svg::Background;
use crate::svg::Circle;
use crate::svg::Gradient;
use crate::svg::GuideLine;
use crate::svg::PanelScrew;
use crate::svg::Part;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Snippet;
use crate::svg::Style;
use crate::svg::Text;

const OUTLINE_STROKE: f32 = 0.125;
pub const DECORATIONS: [&'static str; 2] = ["CircularGraduations", "Pad"];

pub struct SVG {
    width: f32,
    height: f32,
    viewport: Rect,
    panel: Rect,
    styles: Option<Vec<Style>>,
    backgrounds: Vec<Gradient>,
    background: Option<Background>,
    outline: Option<Rect>,
    origin: Option<Point>,
    guidelines: Option<Vec<GuideLine>>,
    inputs: Option<Vec<Circle>>,
    outputs: Option<Vec<Circle>>,
    parameters: Option<Vec<Circle>>,
    lights: Option<Vec<Circle>>,
    widgets: Option<Vec<Circle>>,
    labels: Option<Vec<Text>>,
    decorations: Option<Vec<Snippet>>,
    parts: Option<Vec<Part>>,
    screws: Option<Vec<PanelScrew>>,
    overlay: bool,
}

// TODO include_dir
//      https://crates.io/crates/include_dir
impl SVG {
    pub fn new(width: f32, height: f32, viewport: &Rect, panel: &Rect) -> SVG {
        let backgrounds: Vec<Gradient> = Vec::new();

        SVG {
            width: width,
            height: height,
            viewport: viewport.clone(),
            panel: panel.clone(),
            styles: None,
            backgrounds: backgrounds,
            background: Some(Background::new("default")),
            outline: None,
            origin: None,
            guidelines: None,
            inputs: None,
            outputs: None,
            parameters: None,
            lights: None,
            widgets: None,
            labels: None,
            decorations: None,
            parts: None,
            screws: None,
            overlay: true,
        }
    }

    pub fn styles(mut self, styles: Vec<Style>) -> Self {
        self.styles = Some(styles);
        self
    }

    pub fn background(mut self, bg: Option<(String, Option<Gradient>)>) -> Self {
        match bg {
            Some((name, Some(gradient))) => {
                self.background = Some(Background::new(name.as_str()));
                self.backgrounds.push(gradient);
            }

            Some((name, None)) => {
                self.background = Some(Background::new(name.as_str()));
            }

            None => self.background = None,
        }

        self
    }

    pub fn outline(mut self, outline: &Rect) -> Self {
        self.outline = Some(Rect {
            x: outline.x - OUTLINE_STROKE / 2.0,
            y: outline.y - OUTLINE_STROKE / 2.0,
            width: outline.width,
            height: outline.height,
        });

        let w = outline.width;
        let h = outline.height;

        let screws: Vec<PanelScrew> = if w <= 20.32 {
            vec![
                PanelScrew::new(w / 2.0, 2.54),
                PanelScrew::new(w / 2.0, h - 2.54),
            ]
        } else {
            vec![
                PanelScrew::new(7.62, 2.54),
                PanelScrew::new(w - 7.62, 2.54),
                PanelScrew::new(7.62, h - 2.54),
                PanelScrew::new(w - 7.62, h - 2.54),
            ]
        };

        self.screws = Some(screws);

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

    pub fn widgets(mut self, widgets: Vec<Circle>) -> Self {
        self.widgets = Some(widgets);
        self
    }

    pub fn labels(mut self, labels: Vec<Text>) -> Self {
        self.labels = Some(labels);
        self
    }

    pub fn decorations(mut self, decorations: Vec<Snippet>) -> Self {
        self.decorations = Some(decorations);
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

        if let Some(v) = &self.background {
            context.insert("backgrounds", &self.backgrounds);
            context.insert("background", &v.template);
        }

        if let Some(v) = &self.outline {
            context.insert("outline", v);
        }

        if let Some(v) = &self.origin {
            context.insert("origin", v);
        }

        if let Some(v) = &self.guidelines {
            context.insert("guidelines", v);
        }

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

        if let Some(v) = &self.labels {
            context.insert("labels", v);
        }

        if let Some(v) = &self.decorations {
            context.insert("decorations", v);
        }

        if let Some(v) = &self.parts {
            context.insert("parts", v);
        }

        if let Some(v) = &self.screws {
            context.insert("screws", v);
        }

        let svg = tera.render("panel", &context).unwrap();

        return Ok(svg.to_string());
    }
}

fn load_templates(tera: &mut Tera, theme: &str) {
    let panel = include_str!("templates/panel.svg");
    let mut styles = include_str!("templates/styles.svg");
    let components = include_str!("templates/components.svg");
    let mut backgrounds = include_str!("templates/backgrounds.svg");
    let guidelines = include_str!("templates/guidelines.svg");
    let labels = include_str!("templates/labels.svg");
    let decorations = include_str!("templates/decorations.svg");
    let overlay = include_str!("templates/overlay.svg");
    let mut widgets = include_str!("templates/widgets.svg");

    let mut circular_graduations = include_str!("templates/decorations/CircularGraduations.svg");
    let mut pad = include_str!("templates/decorations/Pad.svg");

    let mut screw = include_str!("templates/components/PanelScrew.svg");
    let mut rbk = include_str!("templates/components/RoundBlackKnob.svg");
    let mut pj301m = include_str!("templates/components/PJ301M.svg");
    let trimpot = include_str!("templates/components/Trimpot.svg");
    let pushbutton = include_str!("templates/components/PushButton.svg");
    let button = include_str!("templates/components/Button.svg");
    let slider = include_str!("templates/components/Slider.svg");
    let led = include_str!("templates/components/LED.svg");

    if theme == "dark" {
        styles = include_str!("templates/dark/styles.svg");
        backgrounds = include_str!("templates/dark/backgrounds.svg");
        widgets = include_str!("templates/dark/widgets.svg");

        circular_graduations = include_str!("templates/decorations/dark/CircularGraduations.svg");
        pad = include_str!("templates/decorations/dark/Pad.svg");

        screw = include_str!("templates/components/dark/PanelScrew.svg");
        rbk = include_str!("templates/components/dark/RoundBlackKnob.svg");
        pj301m = include_str!("templates/components/dark/PJ301M.svg");
    }

    tera.add_raw_template("panel", &panel).unwrap();
    tera.add_raw_template("styles", &styles).unwrap();
    tera.add_raw_template("components", &components).unwrap();
    tera.add_raw_template("backgrounds", &backgrounds).unwrap();
    tera.add_raw_template("labels", &labels).unwrap();
    tera.add_raw_template("decorations", &decorations).unwrap();
    tera.add_raw_template("guidelines", &guidelines).unwrap();
    tera.add_raw_template("overlay", &overlay).unwrap();
    tera.add_raw_template("widgets", &widgets).unwrap();

    tera.add_raw_template("CircularGraduations", &circular_graduations)
        .unwrap();
    tera.add_raw_template("Pad", &pad).unwrap();

    tera.add_raw_template("PanelScrew", &screw).unwrap();
    tera.add_raw_template("RoundBlackKnob", &rbk).unwrap();
    tera.add_raw_template("PJ301M", &pj301m).unwrap();
    tera.add_raw_template("Trimpot", &trimpot).unwrap();
    tera.add_raw_template("PushButton", &pushbutton).unwrap();
    tera.add_raw_template("Button", &button).unwrap();
    tera.add_raw_template("Slider", &slider).unwrap();
    tera.add_raw_template("LED", &led).unwrap();
}
