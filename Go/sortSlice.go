package main

import (
    "fmt"
    "sort"
)

func main() {
    numbers := []int{4, 2, 7, 1, 5}
    fmt.Println("Before sorting:", numbers)

    sort.Slice(numbers, func(i, j int) bool {
        return numbers[i] < numbers[j]
    })

    fmt.Println("After sorting:", numbers)
}
