package httpd

import (
	"fmt"
	"io/fs"
	"net/http"
	"os"

	"github.com/twystd/vcv-panel-designer/log"
)

var debug = false

func SetDebug(b bool) {
	debug = b
}

func Run(config map[string]any) {
	run(os.DirFS("./html"))
}

func run(html fs.FS) {
	infof("httpd", "initialising")

	// ... initialise HTTP server
	fsys := httpdFS{
		http.FS(html),
	}

	http.Handle("/css/", http.FileServer(fsys))
	http.Handle("/fonts/", http.FileServer(fsys))
	http.Handle("/images/", http.FileServer(fsys))
	http.Handle("/javascript/", http.FileServer(fsys))
	http.Handle("/favicon.ico", http.FileServer(fsys))
	http.Handle("/", http.FileServer(fsys))
	//	http.HandleFunc("/", httpd.dispatch)

	port := os.Getenv("PORT")
	if port == "" {
		port = "9876"
	}

	infof("HTTPD", "listening on port %v", port)
	fatalf("HTTPD", "%v", http.ListenAndServe(fmt.Sprintf(":%s", port), nil))
}

func debugf(tag string, format string, values ...interface{}) {
	f := fmt.Sprintf("%-8v %v", tag, format)

	log.Debugf(f, values...)
}

func infof(tag string, format string, values ...interface{}) {
	f := fmt.Sprintf("%-8v %v", tag, format)

	log.Infof(f, values...)
}

func warnf(tag string, format string, values ...interface{}) {
	f := fmt.Sprintf("%-8v %v", tag, format)

	log.Warnf(f, values...)
}

func errorf(tag string, format string, values ...interface{}) {
	f := fmt.Sprintf("%-8v %v", tag, format)

	log.Errorf(f, values...)
}

func fatalf(tag string, format string, values ...interface{}) {
	f := fmt.Sprintf("%-8v %v", tag, format)

	log.Fatalf(f, values...)
}
