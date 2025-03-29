package main

import (
	"bytes"
	"flag"
	"fmt"
	"io"
	"net/http"
	"os"
	"strconv"
  "errors"
  "log"
)

func main() {
  url := os.Args[1]
  api(url)
}

func api(url string) {
  response, err := http.Get(url)
  if err != nil { log.Fatal(err) }

  fmt.Println(response)
}
