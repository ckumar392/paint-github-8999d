package main

import (
	"context"
	"fmt"
	"time"
)

func main() {
	// Create a context with a deadline
	deadline := time.Now().Add(5 * time.Second)
	ctx, cancel := context.WithDeadline(context.Background(), deadline)
	defer cancel() // Ensure cancel is called to release resources

	// Simulate a task with a deadline
	go simulateTask(ctx)

	// Wait for a key press to end the program
	fmt.Println("Press Enter to exit.")
	fmt.Scanln()
}

func simulateTask(ctx context.Context) {
	select {
	case <-ctx.Done():
		// Task canceled or deadline reached
		fmt.Println("Task completed or canceled.")
	}
}
