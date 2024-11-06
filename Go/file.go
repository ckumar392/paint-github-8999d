package main

import (
	"fmt"
	"io"
	"io/ioutil"
	"os"
)

func readFile(fileName string){
	dataByte,err:=ioutil.ReadFile(fileName)
	checkNilErr(err);
	fmt.Print("text data inside the file is \n",string(dataByte)) // if we dont use the sting type it will provide the output in byte format
}

func checkNilErr(err error){
	if err!=nil{
		panic(err)
	}
}
func main90() {
	fmt.Println("we will create a text file using go lang")
	content:="this is the text for the new file"

	file,err:=os.Create("./newFile.txt")
	if err!=nil{
		panic(err)
	}
	length,err:=io.WriteString(file,content) // this gives lengthcontent
	if err!=nil{
		panic(err)
	}
	fmt.Println("length is : ",length)
	readFile("./newFile.txt") 
	defer file.Close()
}
