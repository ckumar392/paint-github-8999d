package main

import "fmt"

func main123() {
    // Anonymous function with no parameters
    func() {
        fmt.Println("Hello from anonymous function!")
    }()

    // Anonymous function with parameters
    func(a, b int) {
        fmt.Printf("Sum of %d and %d is: %d\n", a, b, a+b)
    }(5, 10)
}
