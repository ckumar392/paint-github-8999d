package main

import (
	"encoding/json"
	"fmt"
	"log"
	"os"
	"strings"
)

// Request represents a bank transaction structure.
type Request struct {
	Login  string  `json:"user"`    // `json` tags specify the corresponding JSON keys.
	Type   string  `json:"type"`
	Amount float64 `json:"amount"`
}

var data = `
{
  "user": "Scrooge McDuck",
  "type": "deposit",
  "amount": 123.4
}
`

func main() {
	// Simulate reading JSON data from a file or socket using strings.NewReader.
	rdr := strings.NewReader(data)

	// JSON Decoding Section
	// ---------------------

	// Create a JSON decoder.
	dec := json.NewDecoder(rdr)

	// Initialize a variable of type Request to store the decoded JSON.
	var req Request

	// Decode the JSON data into the Request struct.
	if err := dec.Decode(&req); err != nil {
		log.Fatalf("Error decoding JSON: %s", err)
	}

	// Print the decoded request.
	fmt.Printf("Decoded Request: %+v\n", req)

	// Handling Response Section
	// ------------------------

	// Simulate loading the previous balance from a database.
	prevBalance := 1_000_000.0

	// Create a response map.
	resp := map[string]interface{}{ // this creates a map of type 
		"ok":      true,
		"balance": prevBalance + req.Amount,
	}

	// JSON Encoding Section
	// ---------------------
	
	// Create a JSON encoder that writes to os.Stdout.
	enc := json.NewEncoder(os.Stdout)

	// Encode the response map into JSON and print to standard output.
	if err := enc.Encode(resp); err != nil {
		log.Fatalf("Error encoding JSON: %s", err)
	}
}
