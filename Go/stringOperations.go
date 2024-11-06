package main

import (
	"fmt" 
	"strings"
)

func main7() {
	name := "Alice"
	age := 30
	formattedStr := fmt.Sprintf("Name: %s, Age: %d", name, age)
	fmt.Println(formattedStr)
    message :="hello i am a go message and i am gonna perform string operations on it"
	contains := strings.Contains(message, "go")
	upper := strings.ToUpper(message)
	fmt.Print(contains,"\n",upper,"\n")
	isEqual := message == "Hello, Go!"
	fmt.Print(isEqual)
}
