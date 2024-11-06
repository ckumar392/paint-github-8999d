package main

import (
	// "fmt"
	"log"
	"strings"
	"time"
)

const delay = 700 * time.Millisecond

// print outputs a message and then sleeps for a pre-determined amount
func print(msg string) {
	log.Println(msg)
	time.Sleep(delay)
}

// slowDown takes the given string and repeats its characters
// according to their index in the string.
func slowDown(msg string) {
	words:=strings.Split(msg, " ")
	for _,word:=range words {
		var ans []string
		for x,char:=range word {
			val:=strings.Repeat(string(char), x+1)
			print(val)
			ans = append(ans, val)
		}
		// print(strings.Join(ans,""))
	}
}

func main() {
	msg := "kon pucha tmse ye batao zara!!!"
	slowDown(msg)
}