use regex::Regex;
use serde::{Deserialize, Serialize};

use crate::panel::Panel;

use crate::utils::log;
use crate::warnf;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct X {
    pub reference: String,
    pub offset: f32,
}

impl X {
    pub fn new(reference: &str, offset: f32) -> X {
        X {
            reference: reference.to_string(),
            offset: offset,
        }
    }

    pub fn resolve(&self, panel: &Panel) -> f32 {
        match self._resolve(panel, Vec::new()) {
            Some(v) => v,
            None => 0.0,
        }
    }

    fn _resolve<'a>(&'a self, panel: &Panel, mut stack: Vec<&'a str>) -> Option<f32> {
        let reference = self.reference.as_str();
        let w = panel.width;

        if stack.contains(&reference) {
            warnf!("resolve(X): circular reference {}", reference);
            return None;
        }

        if stack.len() > 25 {
            warnf!("resolve(X): recursion depth exceeded");
            return None;
        }

        stack.push(reference);

        match reference {
            "absolute" => Some(self.offset),
            "origin" => Some(panel.origin.resolve(panel).0 + self.offset),
            "V0" => Some(panel.origin.resolve(panel).0 + self.offset),
            "left" => Some(self.offset),
            "centre" => Some(w / 2.0 + self.offset),
            "center" => Some(w / 2.0 + self.offset),
            "right" => Some(w + self.offset),

            _ => {
                let re = Regex::new(r"(input|output|parameter|light|widget|label)<(.*?)>").unwrap();

                match re.captures(reference) {
                    // ... component reference?
                    Some(captures) => {
                        let itype = captures.get(1).unwrap().as_str();
                        let id = captures.get(2).unwrap().as_str();

                        match find(panel, itype, id) {
                            (Some(x), _) => match x._resolve(panel, stack) {
                                Some(v) => Some(v + self.offset),
                                None => None,
                            },
                            (_, _) => None,
                        }
                    }

                    // ... guideline?
                    None => match panel.guides.get(reference) {
                        Some(g) => match &g.x {
                            Some(x) => match x._resolve(panel, stack) {
                                Some(v) => Some(v + self.offset),
                                None => None,
                            },
                            None => None,
                        },
                        None => None,
                    },
                }
            }
        }
    }
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct Y {
    pub reference: String,
    pub offset: f32,
}

impl Y {
    pub fn new(reference: &str, offset: f32) -> Y {
        Y {
            reference: reference.to_string(),
            offset: offset,
        }
    }

    pub fn resolve(&self, panel: &Panel) -> f32 {
        match self._resolve(panel, Vec::new()) {
            Some(v) => v,
            None => 0.0,
        }
    }

    fn _resolve<'a>(&'a self, panel: &Panel, mut stack: Vec<&'a str>) -> Option<f32> {
        let reference = self.reference.as_str();
        let h = panel.height;

        if stack.contains(&reference) {
            warnf!("resolve(Y): circular reference {}", reference);
            return None;
        }

        if stack.len() > 25 {
            warnf!("resolve(Y): recursion depth exceeded");
            return None;
        }

        stack.push(reference);

        match self.reference.as_str() {
            "absolute" => Some(self.offset),
            "origin" => Some(panel.origin.resolve(panel).1 + self.offset),
            "H0" => Some(panel.origin.resolve(panel).1 + self.offset),
            "top" => Some(self.offset),
            "middle" => Some(h / 2.0 + self.offset),
            "bottom" => Some(h + self.offset),

            _ => {
                let re = Regex::new(r"(input|output|parameter|light|widget|label)<(.*?)>").unwrap();

                match re.captures(reference) {
                    // ... component reference?
                    Some(captures) => {
                        let itype = captures.get(1).unwrap().as_str();
                        let id = captures.get(2).unwrap().as_str();

                        match find(panel, itype, id) {
                            (_, Some(y)) => match y._resolve(panel, stack) {
                                Some(v) => Some(v + self.offset),
                                None => None,
                            },
                            (_, _) => None,
                        }
                    }

                    // ... guideline?
                    None => match panel.guides.get(reference) {
                        Some(g) => match &g.y {
                            Some(y) => match y._resolve(panel, stack) {
                                Some(v) => Some(v + self.offset),
                                None => None,
                            },
                            None => None,
                        },
                        None => None,
                    },
                }
            }
        }
    }
}

fn find(panel: &Panel, itype: &str, reference: &str) -> (Option<X>, Option<Y>) {
    match itype {
        "input" => {
            let mut it = panel.inputs.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "output" => {
            let mut it = panel.outputs.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "parameter" => {
            let mut it = panel.parameters.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "light" => {
            let mut it = panel.lights.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "widget" => {
            let mut it = panel.widgets.iter();
            match it.find(|&v| v.id == reference || v.name == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        "label" => {
            let mut it = panel.labels.iter();
            match it.find(|&v| v.id == reference || v.text == reference) {
                Some(e) => (Some(e.x.clone()), Some(e.y.clone())),
                None => (None, None),
            }
        }

        _ => (None, None),
    }
}
