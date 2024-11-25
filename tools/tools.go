package main

import (
  // "fmt"
  "net/http"
  "os"
  "io"
  "github.com/joho/godotenv"
  "log"
)

type configuration struct {
  SessionCookie string `json:"session-cookie"`
	Output        string `json:"output"`
	Year          int    `json:"year"`
	Day           int    `json:"day"`
	Wait          bool   `json:"-"`
}

func download() error {
  err := godotenv.Load()
  if err != nil {
    log.Fatal("Error loading .env file")
  }

  AOC_SECRET := os.Getenv("AOC_SECRET")

  client := new(http.Client)
  req, err := http.NewRequest("GET", "https://adventofcode.com/2020/day/1/input", nil)
  if err != nil {
    return err
  }

  cookie := new(http.Cookie)
  cookie.Name, cookie.Value = "session", AOC_SECRET
  req.AddCookie(cookie)

  resp, err := client.Do(req)
  if err != nil {
    return err
  }

  defer resp.Body.Close() // so defer waits until the rest of the program executes, basically just closing the response before we forget very smart

  file, err := os.OpenFile("../AOC/inputs/1.txt", os.O_CREATE, 0666)
  _, err = io.Copy(file, resp.Body)

  if err != nil {
    return err
  }

  return nil
}

func main() {
  download()
}
