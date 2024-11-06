package main

import (
	"fmt"
	"time"
)

func main() {
	// Example 1: Parsing a date string
	// parsing means converting the string type to a time type so that it can be used for time manupulation
	dateString := "2024-02-06"
	layout := "2006-01-02" // The layout has to reference the reference date of January 2, 2006, as per the time package documentation
	parsedTime, err := time.Parse(layout, dateString)
	if err != nil {
		fmt.Printf("Error parsing date: %v\n", err)
	} else {
		fmt.Println("Example 1:")
		fmt.Printf("Parsed time: %v\n", parsedTime)
	}

	// Example 2: Getting the current time
	currentTime := time.Now()
	fmt.Println("\nExample 2:")
	fmt.Printf("Current time: %v\n", currentTime)

	// Example 3: Calculating the duration between two times
	// Using the parsed time from Example 1 and the current time
	duration := parsedTime.Sub(currentTime)
	fmt.Println("\nExample 3:")
	fmt.Printf("Duration between parsed time and current time: %v\n", duration)

	// Example 4: Converting duration to hours
	fmt.Println("\nExample 4:")
	fmt.Printf("Duration in hours: %.2f\n", duration.Hours())

	// Example 5: Converting duration to days
	fmt.Println("\nExample 5:")
	fmt.Printf("Duration in days: %.2f\n", duration.Hours()/24)

	// Example 6: Adding duration to a time
	fmt.Println("\nExample 6:")
	futureTime := currentTime.Add(24 * time.Hour)
	fmt.Printf("Future time after adding 24 hours: %v\n", futureTime)

	// Example 7: Formatting time
	fmt.Println("\nExample 7:")
	formattedTime := currentTime.Format("2006-01-02 15:04:05")
	fmt.Printf("Formatted time: %s\n", formattedTime)

	// Example 8: Checking if a time is before/after another time
	fmt.Println("\nExample 8:")
	isBefore := parsedTime.Before(currentTime)
	isAfter := parsedTime.After(currentTime)
	fmt.Printf("Is parsed time before current time? %v\n", isBefore)
	fmt.Printf("Is parsed time after current time? %v\n", isAfter)

	// Example 9: Truncating time to specific precision
	fmt.Println("\nExample 9:")
	truncatedTime := currentTime.Truncate(1 * time.Hour)
	fmt.Printf("Truncated time to the nearest hour: %v\n", truncatedTime)
}
