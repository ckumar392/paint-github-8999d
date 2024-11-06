package main

import "fmt"

func main() {
    // Creating an array
    arr := [3]int{1, 2, 3}

    // Creating a pointer to the first element of the array
    ptr := &arr[0]

    // Accessing elements using the pointer
    fmt.Println("Value at memory location:", *ptr)  // Prints the value at the first element

    // Modifying the value using the pointer
    *ptr = 10
    fmt.Println("Updated value at memory location:", arr[0])  // Prints the updated value

    // Using pointer arithmetic (not recommended in Go, shown for illustration)
    ptr++
    fmt.Println("Value at the next memory location:", *ptr)  // Prints the value at the second element
}
