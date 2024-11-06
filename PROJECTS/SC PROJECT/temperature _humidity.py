import Adafruit_DHT
import time

# Sensor type (DHT11 or DHT22)
sensor = Adafruit_DHT.DHT11

# GPIO pin number
pin = 4

# Try to read the sensor data
while True:
    humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)
    
    if humidity is not None and temperature is not None:
        print("Temperature: {:.1f}°C\tHumidity: {:.1f}%".format(temperature, humidity))
    else:
        print("Failed to read sensor data.")
    
    time.sleep(1)

# sudo pip3 install Adafruit-DHT