package main

import "fmt"

// Defining an interface
type Shape interface {
    Area() float64
    Perimeter() float64
}

// Concrete types implementing the Shape interface
type Circle struct {
    Radius float64
}

type Rectangle struct {
    Width  float64
    Height float64
}

// Implementing methods for the Circle type
func (c Circle) Area() float64 {
    return 3.14 * c.Radius * c.Radius
}

func (c Circle) Perimeter() float64 {
    return 2 * 3.14 * c.Radius
}

// Implementing methods for the Rectangle type
func (r Rectangle) Area() float64 {
    return r.Width * r.Height
}

func (r Rectangle) Perimeter() float64 {
    return 2 * (r.Width + r.Height)
}

func printShapeInfo(s Shape) {
    fmt.Printf("Area: %f, Perimeter: %f\n", s.Area(), s.Perimeter())
}

func main8() {
    // Creating instances of concrete types
    circle := Circle{Radius: 5.0}
    rectangle := Rectangle{Width: 4.0, Height: 6.0}

    // Using the interface
    printShapeInfo(circle)
    printShapeInfo(rectangle)
}
