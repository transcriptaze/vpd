use regex::RegexBuilder;

pub struct PrettyPrinter {}

impl PrettyPrinter {
    pub fn _new() -> PrettyPrinter {
        PrettyPrinter {}
    }

    pub fn _prettify(&self, svg: &str) -> String {
        let pattern = RegexBuilder::new(r#"<(g[^>]*)>\s*<(/g)>"#)
            .dot_matches_new_line(true)
            .build()
            .unwrap();

        let clean = pattern.replace_all(svg, "<$1><$2>");

        return clean.to_string();
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_new() {
        let svg = include_str!("tests/test_0.svg");
        let expected = include_str!("tests/expected_0.svg");
        let pp = PrettyPrinter::_new();

        let p = pp._prettify(svg);

        print!("\n{}\n", p);

        assert_eq!(p, expected);
    }
}
