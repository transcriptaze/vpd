use regex::Regex;

pub struct PrettyPrinter {}

impl PrettyPrinter {
    pub fn _new() -> PrettyPrinter {
        PrettyPrinter {}
    }

    pub fn _prettify(&self, svg: &str) -> String {
        // ... remove trailing whitespace
        let clean0 = Regex::new(r#"(?m)\s+$"#).unwrap().replace_all(svg, "");

        // ... collapse empty <g></g> tags
        let clean1 = Regex::new(r#"(?s)<(g[^>]*)>\s*<(/g)>"#)
            .unwrap()
            .replace_all(&clean0, "<$1><$2>");

        // ... collapse multiple blank lines
        let clean2 = Regex::new(r#"\n{2,}"#).unwrap().replace_all(&clean1, "\n");

        // ... add blank lines around busy groups
        let clean3 = Regex::new(r#"(?ms)(^  <g[^>]*>\n)"#)
            .unwrap()
            .replace_all(&clean2, "\n$1");

        let clean4 = Regex::new(r#"(?ms)(^  </g>\n)"#)
            .unwrap()
            .replace_all(&clean3, "$1\n");

        // ... add blank line after </defs>
        let clean5 = Regex::new(r#"(?ms)(^  </defs>\n)"#)
            .unwrap()
            .replace_all(&clean4, "$1\n");

        return clean5.to_string();
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
