package main

import "fmt"

// Slices can be created by slicing an existing array or by using the make function. 
// For example: mySlice := make([]int, 3, 5) 
// or mySlice := myArray[1:4].

func main87() {
	var myArray [3]int
    myArray[0] = 1
    myArray[1] = 2
    myArray[2] = 3

    // Slice
    mySlice1 := myArray[1:3]
	fmt.Print("the value of the mySlice1 is ",mySlice1,"\n")
    mySlice := []int{1, 2, 3, 4, 5}
    fmt.Println("Element at index 2:", mySlice[2])

    mySlice[3] = 42
	fmt.Print("printing mySlice", mySlice,"\n")
	fmt.Print("the length of the slice is ",len(mySlice),"\n")
    subSlice := mySlice[1:4] // [2, 42, 4]
	fmt.Print(subSlice)
    mySlice = append(mySlice, 6, 7, 8)
    for index, value := range mySlice {
        fmt.Printf("Index: %d, Value: %d\n", index, value)
    }
}