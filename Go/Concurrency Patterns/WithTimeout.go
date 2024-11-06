package main

import (
	"context"
	"fmt"
	"time"
)

func main() {
	// Create a context with a timeout
	timeout := 3 * time.Second
	ctx, cancel := context.WithTimeout(context.Background(), timeout)
	defer cancel() // Ensure cancel is called to release resources

	// Simulate a task with a timeout
	go simulateTask(ctx)

	// Wait for a key press to end the program
	fmt.Println("Press Enter to exit.")
	fmt.Scanln()
}

func simulateTask(ctx context.Context) {
	select {
	case <-ctx.Done():
		// Task canceled or timeout reached
		fmt.Println("Task completed or timed out.")
	}
}
