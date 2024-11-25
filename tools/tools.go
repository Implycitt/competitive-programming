package main

import (
  "fmt"
  "net/http"
  "os"
  "io"
  "github.com/joho/godotenv"
)

type configuration struct {
  SessionCookie string
	Output        string 
	Path          string
	Year          int    
	Day           int   
	Wait          bool   
}

func download(config *configuration) error {
  client := new(http.Client)
  cookie := new(http.Cookie)

  req, err := http.NewRequest("GET", fmt.Sprintf("https://adventofcode.com/%d/day/%d/input", config.Year, config.Day), nil)
  if err != nil { return err }

  cookie.Name, cookie.Value = "session", config.SessionCookie 
  req.AddCookie(cookie)

  resp, err := client.Do(req)
  if err != nil { return err }

  defer resp.Body.Close() // so defer waits until the rest of the program executes, basically just closing the response before we forget very smart

  if _, err := os.Stat(config.Path); os.IsNotExist(err) {
    os.Mkdir(config.Path, os.ModeDir|0755)
  }

  file, err := os.OpenFile(fmt.Sprintf("%s/%s", config.Path, config.Output), os.O_CREATE, 0666)

  defer file.Close()

  _, err = io.Copy(file, resp.Body)
  if err != nil { return err }

  return nil
}

func createConfig(day int, year int) (*configuration, error) {
  config := new(configuration)

  err := godotenv.Load()
  if err != nil { return config, err }
  AOC_SECRET := os.Getenv("AOC_SECRET")

  config.SessionCookie = AOC_SECRET 
  config.Day = day 
  config.Year = year 
  config.Output = fmt.Sprintf("%d.txt", config.Day)
  config.Path = fmt.Sprintf("../AOC/inputs/%d", config.Year)

  return config, nil
}

func main() {
  config, err := createConfig(1, 2020)
  if err != nil { return }

  download(config)
}
