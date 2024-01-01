package main

import (
	_ "embed"
	"flag"
	"fmt"

	"github.com/twystd/vcv-panel-designer/go/httpd"
)

const VERSION = "v0.0.0"

var options = struct {
	port  uint
	debug bool
}{
	port:  9876,
	debug: false,
}

func main() {
	fmt.Println()
	fmt.Printf("VCV Panel Designer %v\n", VERSION)
	fmt.Println()

	flag.UintVar(&options.port, "port", options.port, "(optional) HTTP port")
	flag.BoolVar(&options.debug, "debug", options.debug, "enables internal debug mode")
	flag.Parse()

	httpd.SetDebug(options.debug)
	httpd.Run(uint16(options.port))
}
