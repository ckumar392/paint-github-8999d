package main

import (
    "fmt"
    "errors"
) 

func sum(a,b int)(int){
	return a+b
}

//multiple return values
func sumMul(a,b int)(int,int){
	return a+b,a*b
}
// function with named return values
func divide(a, b float64) (result float64, err error) {
    if b == 0 {
        err = errors.New("division by zero")
        return
    }
    result = a / b
    return
}
// function that can take variable number of arguments
func sum4(numbers ...int) int {
    total := 0
    for _, num := range numbers {
        total += num
    }
    return total
}

//anonymous functions 

func main98() {
    fmt.Println(sum(5, 6))
    fmt.Println(sumMul(5, 6))
}

