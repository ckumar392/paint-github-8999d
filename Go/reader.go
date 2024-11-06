package main

import (
	"bufio"
	"fmt"
	"os"
)

func mainm() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter something: ")
	userInput, err := reader.ReadString('\n')

	if err != nil {
		fmt.Println("Error reading input:", err)
		return
	}

	fmt.Println("You entered:", userInput)
}
