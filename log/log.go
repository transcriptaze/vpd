package log

import (
	"fmt"
	syslog "log"
)

type Level int

const (
	None Level = iota
	Fatal
	Error
	Warn
	Info
	Debug
)

var level Level = Debug

func (l Level) String() string {
	return [...]string{"", "FATAL", "ERROR", "WARN", "INFO", "DEBUG"}[l]
}

func Debugf(format string, v ...interface{}) {
	if level >= Debug {
		log(Debug, fmt.Sprintf(format, v...))
	}
}

func Infof(format string, v ...interface{}) {
	if level >= Info {
		log(Info, fmt.Sprintf(format, v...))
	}
}

func Warnf(format string, v ...interface{}) {
	if level >= Warn {
		log(Warn, fmt.Sprintf(format, v...))
	}
}

func Errorf(format string, v ...interface{}) {
	if level >= Error {
		log(Error, fmt.Sprintf(format, v...))
	}
}

func Fatalf(format string, v ...interface{}) {
	syslog.Fatalf("%-5v %v", Fatal, fmt.Sprintf(format, v...))
}

func log(level Level, msg string) {
	syslog.Printf("%-5v %v", level, msg)
}
