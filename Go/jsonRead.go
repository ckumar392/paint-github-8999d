package main

import (
	"encoding/json"
	"fmt"
	"os"
)
type input3 struct {
	Name string `json:"name"`
	Age  int    `json:"age"`
	Sex  string `json:"sex"`
}

func main() {
	data:=[]input3{}
	// data:=input3{} //used if we have single data not array of json data
	f,err:=os.Open("jsonFile.json")
	if err != nil {
		panic(err)
	}
	defer f.Close()
	json.NewDecoder(f).Decode(&data)
	fmt.Print(&data)
}
 
