use std::collections::HashMap;
use std::error::Error;

use serde::{Deserialize, Serialize};

use wasm_bindgen::prelude::*;

use crate::panel::Background;
use crate::panel::Decoration;
use crate::panel::Guide;
use crate::panel::Input;
use crate::panel::Label;
use crate::panel::Light;
use crate::panel::Origin;
use crate::panel::Output;
use crate::panel::Parameter;
use crate::panel::Widget;

use crate::svg::Circle;
use crate::svg::Gradient;
use crate::svg::GuideLine;
use crate::svg::Part;
use crate::svg::Point;
use crate::svg::Rect;
use crate::svg::Snippet;
use crate::svg::Stop;
use crate::svg::Stretch;
use crate::svg::Style;
use crate::svg::Text;
use crate::svg::SVG;

use crate::vcv::VCV;

pub const H: f32 = 5.08; // 1 'horizontal' unit

#[derive(Serialize, Deserialize)]
pub struct Panel {
    pub width: f32,
    pub height: f32,
    pub background: Option<Background>,
    pub inputs: Vec<Input>,
    pub outputs: Vec<Output>,
    pub parameters: Vec<Parameter>,
    pub lights: Vec<Light>,
    pub widgets: Vec<Widget>,
    pub labels: Vec<Label>,
    pub decorations: Vec<Decoration>,

    pub gutter: f32,
    pub origin: Origin,
    pub guides: HashMap<String, Guide>,
}

impl Panel {
    pub fn new(width: f32, _height: f32) -> Panel {
        let w = (width / H).round();

        return Panel {
            width: w * H,
            height: 128.5,
            background: Some(Background::default()),
            inputs: Vec::new(),
            outputs: Vec::new(),
            parameters: Vec::new(),
            lights: Vec::new(),
            widgets: Vec::new(),
            labels: Vec::new(),
            decorations: Vec::new(),

            gutter: 5.0,
            origin: Origin::new(),
            guides: HashMap::new(),
        };
    }

    #[allow(non_snake_case)]
    pub fn to_SVG(&self, theme: &str) -> Result<String, Box<dyn Error>> {
        let w = self.width + 2.0 * self.gutter;
        let h = self.height + 2.0 * self.gutter;
        let viewport = self.viewport();
        let panel = Rect::new(0.0, 0.0, self.width, self.height);
        let styles = self.styles();
        let origin = self.origin();
        let guidelines = self.guidelines();
        let background = self.background(theme);
        let inputs = self.inputs(theme);
        let outputs = self.outputs(theme);
        let parameters = self.parameters(theme);
        let lights = self.lights(theme);
        let widgets = self.widgets(theme);
        let labels = self.labels(theme);
        let decorations = self.decorations(theme);
        let parts = self.parts(theme);

        let svg = SVG::new(w, h, &viewport, &panel)
            .styles(styles)
            .background(background)
            .outline(&panel)
            .origin(origin)
            .guidelines(guidelines)
            .inputs(inputs)
            .outputs(outputs)
            .parameters(parameters)
            .lights(lights)
            .widgets(widgets)
            .labels(labels)
            .decorations(decorations)
            .parts(parts)
            .overlay(true);

        svg.to_SVG(theme)
    }

    #[allow(non_snake_case)]
    pub fn export_SVG(&self, theme: &str) -> Result<String, JsValue> {
        let w = self.width;
        let h = self.height;
        let viewport = Rect::new(0.0, 0.0, self.width, self.height);
        let panel = Rect::new(0.0, 0.0, self.width, self.height);
        let background = self.background(theme);
        let inputs = self.inputs(theme);
        let outputs = self.outputs(theme);
        let parameters = self.parameters(theme);
        let lights = self.lights(theme);
        let labels = self.labels(theme);
        let decorations = self.decorations(theme);

        let svg = SVG::new(w, h, &viewport, &panel)
            .background(background)
            .inputs(inputs)
            .outputs(outputs)
            .parameters(parameters)
            .lights(lights)
            .labels(labels)
            .decorations(decorations)
            .overlay(false);

        match svg.to_SVG(theme) {
            Ok(v) => Ok(v),
            Err(e) => Err(JsValue::from(format!("{}", e))),
        }
    }

    pub fn export_header(&self) -> Result<String, JsValue> {
        // let inputs = self.inputs();
        // let outputs = self.outputs();
        // let parameters = self.parameters();
        // let lights = self.lights();

        // let vcv = VCV::new()
        //     .inputs(inputs)
        //     .outputs(outputs)
        //     .parameters(parameters)
        //     .lights(lights);

        let vcv = VCV::new();

        match vcv.to_header() {
            Ok(v) => Ok(v),
            Err(e) => Err(JsValue::from(format!("{}", e))),
        }
    }

    fn viewport(&self) -> Rect {
        Rect {
            x: -self.gutter,
            y: -self.gutter,
            width: self.width + 2.0 * self.gutter,
            height: self.height + 2.0 * self.gutter,
        }
    }

    fn styles(&self) -> Vec<Style> {
        return Vec::new();
    }

    pub fn origin(&self) -> Point {
        let xy = self.origin.resolve(&self);

        Point::new(xy.0, xy.1)
    }

    fn guidelines(&self) -> Vec<GuideLine> {
        let mut list: Vec<GuideLine> = Vec::new();

        for (k, v) in self.guides.iter() {
            match v.to_SVG(k, self) {
                Some(g) => list.push(g),
                _ => {}
            }
        }

        return list;
    }

    pub fn background(&self, theme: &str) -> Option<(String, Option<Gradient>)> {
        match &self.background {
            Some(bg) => {
                let background = &bg.background;
                let gradient = match (&bg.rgb, &bg.rgba, theme) {
                    (Some(v), _, "dark") => {
                        let stop1 = Stop::new(0.0, &v.colour[1]);
                        let stop2 = Stop::new(100.0, &v.colour[1]);
                        Some(Gradient::new(&background, stop1, stop2))
                    }

                    (Some(v), _, _) => {
                        let stop1 = Stop::new(0.0, &v.colour[0]);
                        let stop2 = Stop::new(100.0, &v.colour[0]);
                        Some(Gradient::new(&background, stop1, stop2))
                    }

                    (_, Some(v), "dark") => {
                        let stop1 = Stop::new(0.0, &v.colour[1]);
                        let stop2 = Stop::new(100.0, &v.colour[1]);
                        Some(Gradient::new(&background, stop1, stop2))
                    }

                    (_, Some(v), _) => {
                        let stop1 = Stop::new(0.0, &v.colour[0]);
                        let stop2 = Stop::new(100.0, &v.colour[0]);
                        Some(Gradient::new(&background, stop1, stop2))
                    }

                    (_, _, _) => None,
                };

                Some((background.to_string(), gradient))
            }

            None => None,
        }
    }

    fn inputs(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#00ff00";

        for v in self.inputs.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);

            list.push(Circle::new(&v.name, x, y, radius, &colour));
        }

        return list;
    }

    fn outputs(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#0000ff";

        for v in self.outputs.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);

            list.push(Circle::new(&v.name, x, y, radius, &colour));
        }

        return list;
    }

    fn parameters(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#ff0000";

        for v in self.parameters.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);

            list.push(Circle::new(&v.name, x, y, radius, &colour));
        }

        return list;
    }

    fn lights(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#ff00ff";

        for v in self.lights.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);

            list.push(Circle::new(&v.name, x, y, radius, &colour));
        }

        return list;
    }

    fn widgets(&self, _theme: &str) -> Vec<Circle> {
        let mut list: Vec<Circle> = Vec::new();
        let radius = 2.54;
        let colour = "#ffff00";

        for v in self.widgets.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);

            list.push(Circle::new(&v.name, x, y, radius, &colour));
        }

        return list;
    }

    fn labels(&self, theme: &str) -> Vec<Text> {
        let mut list: Vec<Text> = Vec::new();

        for v in self.labels.iter() {
            let mut x = v.x.resolve(&self);
            let mut y = v.y.resolve(&self);
            let colour = match theme {
                "dark" => v.colour.dark.as_str(),
                _ => v.colour.light.as_str(),
            };

            x += match v.halign.as_str() {
                "left" => 0.0,
                "centre" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
                "center" => -(v.path.bounds.x1 + v.path.bounds.x2) / 2.0,
                "right" => -v.path.bounds.x2,
                _ => 0.0,
            };

            y += match v.valign.as_str() {
                "top" => -v.path.bounds.y1,
                "middle" => -(v.path.bounds.y1 + v.path.bounds.y2) / 2.0,
                "baseline" => 0.0,
                "bottom" => -v.path.bounds.y2,
                _ => 0.0,
            };

            list.push(Text::new(x, y, &v.path.path, &colour));
        }

        return list;
    }

    fn decorations(&self, _theme: &str) -> Vec<Snippet> {
        let mut list: Vec<Snippet> = Vec::new();

        for v in self.decorations.iter() {
            let x = v.x.resolve(&self);
            let y = v.y.resolve(&self);
            let stretch = Stretch::new(v.stretch.x, v.stretch.y);

            list.push(Snippet::new(&v.name, x, y, v.scale, &stretch, &v.component));
        }

        return list;
    }

    fn parts(&self, _theme: &str) -> Vec<Part> {
        let mut list: Vec<Part> = Vec::new();

        for v in self.inputs.iter() {
            match &v.part {
                Some(p) => {
                    let x = v.x.resolve(&self);
                    let y = v.y.resolve(&self);

                    list.push(Part::new(p, x, y));
                }
                None => {}
            }
        }

        for v in self.outputs.iter() {
            match &v.part {
                Some(p) => {
                    let x = v.x.resolve(&self);
                    let y = v.y.resolve(&self);

                    list.push(Part::new(p, x, y));
                }
                None => {}
            }
        }

        for v in self.parameters.iter() {
            match &v.part {
                Some(p) => {
                    let x = v.x.resolve(&self);
                    let y = v.y.resolve(&self);

                    list.push(Part::new(p, x, y));
                }
                None => {}
            }
        }

        for v in self.lights.iter() {
            match &v.part {
                Some(p) => {
                    let x = v.x.resolve(&self);
                    let y = v.y.resolve(&self);

                    list.push(Part::new(p, x, y));
                }
                None => {}
            }
        }

        for v in self.widgets.iter() {
            match &v.part {
                Some(p) => {
                    let x = v.x.resolve(&self);
                    let y = v.y.resolve(&self);

                    list.push(Part::new(p, x, y));
                }
                None => {}
            }
        }

        return list;
    }
}
