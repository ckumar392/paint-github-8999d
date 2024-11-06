package main

import (
	"encoding/json"
	"fmt"
	"log"
)

type input struct {
	Name string 
	Usn  int
}

func main() {
	dataToPass := input{
		Name: "Chandan Kumar",
		Usn:  15,
	}
	data, err := json.Marshal(dataToPass)
	check(err)
	fmt.Println(string(data))
}

func check(err error) {
	if err != nil {
		log.Fatal(err)
	}
}
