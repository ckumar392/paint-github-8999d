package main

import "fmt"

func main232() {
    // Declare a variable
    number := 42
    fmt.Println("Original value:", number)

    // Declare a pointer to the variable
    pointerToNumber := &number
    fmt.Println("Memory address of 'number':", pointerToNumber)

    // Dereferencing the pointer
    fmt.Println("Value pointed to by 'pointerToNumber':", *pointerToNumber)

    // Modify the value through the pointer
    *pointerToNumber = 99
    fmt.Println("Modified value through 'pointerToNumber':", number)

    // Create a pointer with new
    newPointer := new(int)
    fmt.Println("Value pointed to by 'newPointer' (initially zeroed):", *newPointer)

    // Assign a value to the memory location pointed by the pointer
    *newPointer = 123
    fmt.Println("Modified value through 'newPointer':", *newPointer)

    // Pointer arithmetic
    array := [3]int{10, 20, 30}
    arrayPointer := &array[0]
    fmt.Println("Array element at index 0:", *arrayPointer)
    // arrayPointer++
    fmt.Println("Array element at index 1 (after pointer increment):", *arrayPointer)

    // Nil pointer
    var nilPointer *int
    if nilPointer == nil {
        fmt.Println("nilPointer is nil")
    }

    // Function that accepts a pointer and modifies the value
    modifyValue := func(ptr *int) {
        *ptr += 5
    }

    // Call the function with the pointer
    modifyValue(&number)
    fmt.Println("Modified value through function:", number)
}
