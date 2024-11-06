package main

import "fmt"

func main79() {
    // Creating a map
    myMap := make(map[string]int)

    // Adding key-value pairs
    myMap["one"] = 1
    myMap["two"] = 2
    myMap["three"] = 3

    // Accessing values
    fmt.Println("Value for key 'two':", myMap["two"])

    // Modifying values
    myMap["two"] = 22

    // Deleting a key-value pair
    delete(myMap, "three")

    // Iterating over the map
    for key, value := range myMap {
        fmt.Printf("Key: %s, Value: %d\n", key, value)
    }
}
