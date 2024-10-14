use serde::Deserialize;
use std::error::Error;

use crate::command::Command;
use crate::module::Module;
use crate::panel::X;
use crate::panel::Y;

#[derive(Deserialize, Debug)]
pub struct SetGuide {
    id: String,
    name: Option<String>,
    xy: Option<XY>,
}

#[derive(Deserialize)]
struct Object {
    guide: SetGuide,
}

#[derive(Deserialize, Debug)]
struct XY {
    pub reference: String,
    pub offset: f32,
}

impl SetGuide {
    pub fn new(json: &str) -> Result<Self, Box<dyn Error>> {
        let object: Object = serde_json::from_str(json)?;

        Ok(object.guide)
    }
}

impl Command for SetGuide {
    fn validate(&self, m: &mut Module) -> Option<Box<dyn Error>> {
        // ... id
        if let Some(name) = &self.name {
            if let Some(g) = m.find_guide(&name) {
                if g.id != self.id {
                    return Some(format!("duplicate guide id '{}'", name).into());
                }
            }
        }

        // ... reference
        if let Some(xy) = &self.xy {
            match xy.reference.as_str() {
                "" => {}
                "absolute" | "origin" | "V0" | "H0" => {}
                "left" | "centre" | "center" | "right" => {}
                "top" | "middle" | "bottom" => {}

                reference => {
                    if !m.panel.guides.contains_key(reference) {
                        return Some(format!("missing reference guideline '{}'", reference).into());
                    }
                }
            };
        }

        // ... duplicate offset?
        if let Some(xy) = &self.xy {
            if let Some(guide) = m.panel.guides.get(&self.id) {
                let reference = xy.reference.as_str();

                if let Some(_) = &guide.x {
                    let x = X::new(reference, xy.offset).resolve(&m.panel);

                    for (k, v) in m.panel.guides.iter() {
                        if let Some(g) = &v.x {
                            let dx = x - g.resolve(&m.panel);
                            if dx.abs() < 0.25 {
                                return Some(format!("duplicate guideline offset '{}'", k).into());
                            }
                        }
                    }
                }

                if let Some(_) = &guide.y {
                    let y = Y::new(reference, xy.offset).resolve(&m.panel);

                    for (k, v) in m.panel.guides.iter() {
                        if let Some(g) = &v.y {
                            let dy = y - g.resolve(&m.panel);
                            if dy.abs() < 0.25 {
                                return Some(format!("duplicate guideline offset '{}'", k).into());
                            }
                        }
                    }
                }
            }
        }

        None
    }

    fn apply(&self, m: &mut Module) {
        if let Some(name) = &self.name {
            if let Some(mut g) = m.panel.guides.remove(&self.id) {
                g.id = name.to_string();
                m.panel.guides.insert(name.to_string(), g);

                m.migrate("guide", &self.id, name);
            }
        }

        if let Some(xy) = &self.xy {
            if let Some(g) = m.find_guide(&self.id) {
                if let Some(x) = &mut g.x {
                    x.reference = xy.reference.clone();
                    x.set_offset(xy.offset);
                }

                if let Some(y) = &mut g.y {
                    y.reference = xy.reference.clone();
                    y.set_offset(xy.offset);
                }
            }
        }
    }
}
