package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"os"
	"log")

type input2 struct {
	Name string `json:"nm"`
	Usn  int    `json:"usnNo"`
}

func main() {
	dataToPass := input2{
		Name: "Chandan Kumar",
		Usn:  15,
	}
	buf := new(bytes.Buffer)
	enc := json.NewEncoder(buf)
	enc.Encode(dataToPass)

	// Create a new file named "output.json"
	file, err := os.Create("output.json")
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}
	defer file.Close()


	// Copy the content of the buffer to the file
	//io.Copy(file, buf) //this alone works
	io.Copy(file, buf)


	// or use this 
	file2, err := os.Create("output2.json")
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}

	defer file2.Close()
	buf2:=new(bytes.Buffer)
	json.NewEncoder(buf2).Encode(dataToPass)
	io.Copy(file2, buf2)
	fmt.Println("Data copied to output.json successfully!")
}
func check(err error) {
	if err != nil {
		log.Fatal(err)
	}
}