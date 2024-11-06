package main

import "fmt"

// Define the Student interface
type Student interface {
    GetName() string
    GetRollNumber() int
    GetGrade() string
}

// Implement the interface for a type, say, CollegeStudent
type CollegeStudent struct {
    Name       string
    RollNumber int
    Grade      string
}

// Implement the methods for CollegeStudent to satisfy the Student interface
func (s CollegeStudent) GetName() string {
    return s.Name
}


func (s CollegeStudent) GetRollNumber() int {
    return s.RollNumber
}

func (s CollegeStudent) GetGrade() string {
    return s.Grade
}

// Function that takes a Student and displays their information
func DisplayStudentInfo(student Student) {
    fmt.Printf("Name: %s\nRoll Number: %d\nGrade: %s\n", student.GetName(), student.GetRollNumber(), student.GetGrade())
}

func main767() {
    // Create an instance of CollegeStudent
    collegeStudent := CollegeStudent{
        Name:       "Alice",
        RollNumber: 101,
        Grade:      "A",
    }

    // Call the DisplayStudentInfo function with the CollegeStudent instance
    DisplayStudentInfo(collegeStudent)
}
