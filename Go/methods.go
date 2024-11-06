package main

import "fmt"

// Function that adds two numbers
func add(a, b int) int {
    return a + b
}

// Method with a value receiver for the Calculator type
func (c Calculator) multiply(x, y int) int {
    return x * y
}

type Calculator struct {
    Brand string
}

func main999() {
    // Using the add function
    result := add(3, 4)
    fmt.Println("Sum:", result)

    // Using the multiply method
    casio := Calculator{Brand: "Casio"}
    product := casio.multiply(2, 5)
    fmt.Println("Product:", product)
}
