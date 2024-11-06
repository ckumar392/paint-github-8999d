package main

import (
	"context"
	"fmt"
	"time"
)

func main() {
	// Create a context with cancel function
	ctx, cancel := context.WithCancel(context.Background())
	defer cancel() // Ensure cancel is called to release resources

	// Simulate a task with a timeout
	go simulateTask(ctx)

	// Wait for a key press to cancel the task
	fmt.Println("Press Enter to cancel the task.")
	fmt.Scanln()

	// Call cancel to signal cancellation
	cancel()
	fmt.Println("Task canceled.")
}

func simulateTask(ctx context.Context) {
	for {
		select {
		case <-ctx.Done():
			// Task canceled, perform cleanup or return
			fmt.Println("Task canceled. Cleaning up.")
			return
		default:
			// Simulate ongoing task
			fmt.Println("Task running...")
			time.Sleep(1 * time.Second)
		}
	}
}
