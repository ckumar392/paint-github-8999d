package main

import "fmt"

// Struct declaration
type Person struct {
    FirstName string
    LastName  string
    Age       int
}

func main6() {
    // Creating an instance of the struct
    person1 := Person{
        FirstName: "John",
        LastName:  "Doe",
        Age:       30,
    }

    // Accessing struct fields
    fmt.Println(person1.FirstName) // Output: John
    fmt.Println(person1.LastName)  // Output: Doe
    fmt.Println(person1.Age)       // Output: 30
}
