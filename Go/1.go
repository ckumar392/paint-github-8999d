package main

import "fmt"

func main1() {
	// for loop
	for i:=1;i<10;i++{
		fmt.Println(i)
	}
	// go doesnt have while loop but has the following syntax
	x:=0
	for x<20{
		fmt.Println(x)
		x++
	}
	//infinite loops 
	for{
		fmt.Println("the name is khan")
		
	}
}