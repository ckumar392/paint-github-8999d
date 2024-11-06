package main

import (
	"encoding/json"
	"log"
	"math/rand"
	"os"
	"time"
)

const path = "/workspaces/level-up-go-3082084/01_03b/entries.json"

// raffleEntry is the struct we unmarshal raffle entries into
type raffleEntry struct {
    ID     string `json:"id"`
    Name   string `json:"name"`
    Country string `json:"country,omitempty"` // Add omitempty to handle optional "country" field
}

// importData reads the raffle entries from file and creates the entries slice.
func importData2() []raffleEntry {
	file, err := os.ReadFile(path)
	if err != nil {
		log.Fatal(err)
	}

	var data []raffleEntry
	err = json.Unmarshal(file, &data)
	if err != nil {
		log.Fatal(err)
	}
	return data
}
func importData() []raffleEntry {
	file, err := os.Open(path)
	if err != nil {
		log.Fatalf("Error opening file: %v", err)
	}
	defer file.Close()

	var entries []raffleEntry
	err = json.NewDecoder(file).Decode(&entries)
	if err != nil {
		log.Fatalf("Error decoding JSON: %v", err)
	}
	return entries
}

// getWinner returns a random winner from a slice of raffle entries.
func getWinner(entries []raffleEntry) raffleEntry {
	rand.Seed(time.Now().Unix())
	wi := rand.Intn(len(entries))
	return entries[wi]
}

func main() {
	entries := importData()
	log.Println("And... the raffle winning entry is...")
	winner := getWinner(entries)
	time.Sleep(500 * time.Millisecond)
	log.Println(winner)
}
