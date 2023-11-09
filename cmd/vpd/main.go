package main

import (
	_ "embed"
	"encoding/json"
	"flag"
	"fmt"
	"log"
	"os"

	"github.com/twystd/vcv-panel-designer/httpd"
)

//go:embed config.json
var configuration []byte

const VERSION = "v0.1.0"

var options = struct {
	conf  string
	debug bool
}{
	conf:  "",
	debug: false,
}

func main() {
	fmt.Println()
	fmt.Printf("VCV Panel Designer %v\n", VERSION)
	fmt.Println()

	config := map[string]any{}
	if err := json.Unmarshal(configuration, &config); err != nil {
		log.Fatalf("Error parsing default configuration: %v", err)
	}

	flag.StringVar(&options.conf, "config", options.conf, "(optional) configuration file")
	flag.BoolVar(&options.debug, "debug", options.debug, "enables internal debug mode")
	flag.Parse()

	flag.Visit(func(f *flag.Flag) {
		switch f.Name {
		case "config":
			if bytes, err := os.ReadFile(options.conf); err != nil {
				log.Fatalf("%v", err)
			} else if err := json.Unmarshal(bytes, &config); err != nil {
				log.Fatalf("invalid configuration '%v' (%v)", options.conf, err)
			}
		}
	})

	httpd.SetDebug(options.debug)
	httpd.Run(config)
}
