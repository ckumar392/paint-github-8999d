package main

import "fmt"

func main3() {
    defer fmt.Println("This will be printed last.")
    fmt.Println("This will be printed first.")

	fmt.Println("Before panic")
    panic("Something went wrong!")
    fmt.Println("After panic") // This line won't be executed
}
