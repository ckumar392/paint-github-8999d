import RPi.GPIO as GPIO
import time

# Use the GPIO numbering of the Raspberry Pi
GPIO.setmode(GPIO.BCM)

# Define the GPIO pins used to control the DC motor
motor_pin_1 = 17
motor_pin_2 = 18

# Set up the GPIO pins as output pins
GPIO.setup(motor_pin_1, GPIO.OUT)
GPIO.setup(motor_pin_2, GPIO.OUT)

# Function to control the DC motor
def control_motor(direction):
    if direction == "forward":
        GPIO.output(motor_pin_1, GPIO.HIGH)
        GPIO.output(motor_pin_2, GPIO.LOW)
    elif direction == "reverse":
        GPIO.output(motor_pin_1, GPIO.LOW)
        GPIO.output(motor_pin_2, GPIO.HIGH)
    else:
        GPIO.output(motor_pin_1, GPIO.LOW)
        GPIO.output(motor_pin_2, GPIO.LOW)

# Run the motor in the forward direction for 5 seconds
control_motor("forward")
time.sleep(5)

# Stop the motor
control_motor("stop")

# Clean up the GPIO configuration
GPIO.cleanup()
# In this example, the control_motor function takes a single argument, direction, which can be either "forward", "reverse", or "stop".
# The function sets the appropriate GPIO pins to either GPIO.HIGH or GPIO.LOW to control the direction of the motor.
# The code then runs the motor in the forward direction for 5 seconds before stopping it and cleaning up the GPIO configuration.