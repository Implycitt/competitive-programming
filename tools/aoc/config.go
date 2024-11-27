package main 

import(
  "fmt"
  "os"
  "time"
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

func defaultConfig() (*configuration, error) {

  config := new(configuration)

  err := godotenv.Load()
  if err != nil { return config, err }
  AOC_SECRET := os.Getenv("AOC_SECRET")

  est, err := time.LoadLocation("EST")
  if err != nil { os.Exit(1) }
  now := time.Now().In(est)

  config.SessionCookie = AOC_SECRET 

  if string(now.Month()) != "December" {
    config.Day = 25
    config.Year = int(now.Year())-1
  } else {
    config.Day = now.Day()
    config.Year = now.Year()
  }

  config.Output = fmt.Sprintf("%d.txt", config.Day)
  config.Path = fmt.Sprintf("../../AOC/inputs/%d", config.Year)

  return config, nil
}

func (config *configuration) merge(other *configuration) {
  if other.Year != 0 { config.Year = other.Year }
  if other.Day != 0 { config.Day = other.Day }
}
