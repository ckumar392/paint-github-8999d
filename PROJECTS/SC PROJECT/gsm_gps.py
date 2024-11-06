# Note: The above code is just an example and may need to be modified to work with your specific hardware setup and requirements. 
# The /dev/ttyAMA0 and /dev/ttyUSB0 device paths may be different on your system, and the baud rates and timeouts may need to be adjusted 
# for your devices.


import serial
import time

# GSM module setup
gsm_port = serial.Serial("/dev/ttyAMA0", baudrate=9600, timeout=1)
gsm_port.write("AT\r\n")
time.sleep(1)
gsm_port.write("AT+CMGF=1\r\n")
time.sleep(1)

# GPS module setup
gps_port = serial.Serial("/dev/ttyUSB0", baudrate=9600, timeout=1)
gps_port.write("$PMTK314,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*29\r\n")

# Read GPS data
while True:
    gps_data = gps_port.readline()
    print(gps_data)
    if gps_data[0:6] == "$GPRMC":
        gps_list = gps_data.split(",")
        latitude = gps_list[3]
        longitude = gps_list[5]
        print("Latitude: " + latitude)
        print("Longitude: " + longitude)
        break

# Send SMS
gsm_port.write("AT+CMGS=" + "\"" + "+1234567890" + "\"\r\n")
time.sleep(1)
gsm_port.write("GPS Location: Latitude: " + latitude + ", Longitude: " + longitude + "\r\n")
gsm_port.write("\x1A")
time.sleep(1)

gsm_port.close()
gps_port.close()
