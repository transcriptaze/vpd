package httpd

import (
	"io/fs"
	"net/http"
)

func Run() {
	run(os.DirFS("../scms-www/html"))
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
