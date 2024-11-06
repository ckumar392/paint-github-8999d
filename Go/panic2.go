package main

import "fmt"

func main4() {
	examplePanic()
}

func examplePanic() {
    fmt.Println("Before panic")
    defer exampleRecover() // Deferred function for recovery
    panic("the panic statement")
    fmt.Println("After panic") // This line won't be executed
}
func exampleRecover() {
    if r := recover(); r != nil {
        fmt.Println("Recovered:", r)
        // Additional cleanup or logging can be done here.
    }
}