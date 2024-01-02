package main

import (
	_ "embed"
	"flag"
	"fmt"

	"github.com/twystd/vcv-panel-designer/go/httpd"
)

const VERSION = "v0.0.0"

var options = struct {
	HTML  string
	port  uint
	debug bool
}{
	HTML:  "",
	port:  9876,
	debug: false,
}

func main() {
	fmt.Println()
	fmt.Printf("VCV Panel Designer %v\n", VERSION)
	fmt.Println()

	flag.StringVar(&options.HTML, "html", options.HTML, "(optional) HTML folder")
	flag.UintVar(&options.port, "port", options.port, "(optional) HTTP port")
	flag.BoolVar(&options.debug, "debug", options.debug, "enables internal debug mode")
	flag.Parse()

	httpd.SetDebug(options.debug)
	httpd.Run(options.HTML, uint16(options.port))
}
