import smbus
import time

# Get I2C bus
bus = smbus.SMBus(1)

# MPU6050 address, 0x68(104)
# Select PWR_MGMT_1 register, 0x6B(107)
#       0x00(00)    Default value
bus.write_byte_data(0x68, 0x6B, 0x00)

time.sleep(0.1)

# MPU6050 address, 0x68(104)
# Read data back from 0x3B(59), 2 bytes
# X-Axis LSB, X-Axis MSB
data0 = bus.read_byte_data(0x68, 0x3B)
data1 = bus.read_byte_data(0x68, 0x3C)

# Convert the data to 10-bits
xAccl = ((data1 & 0x03) * 256) + data0
if xAccl > 511 :
    xAccl -= 1024

# MPU6050 address, 0x68(104)
# Read data back from 0x3D(61), 2 bytes
# Y-Axis LSB, Y-Axis MSB
data0 = bus.read_byte_data(0x68, 0x3D)
data1 = bus.read_byte_data(0x68, 0x3E)

# Convert the data to 10-bits
yAccl = ((data1 & 0x03) * 256) + data0
if yAccl > 511 :
    yAccl -= 1024

# MPU6050 address, 0x68(104)
# Read data back from 0x3F(63), 2 bytes
# Z-Axis LSB, Z-Axis MSB
data0 = bus.read_byte_data(0x68, 0x3F)
data1 = bus.read_byte_data(0x68, 0x40)

# Convert the data to 10-bits
zAccl = ((data1 & 0x03) * 256) + data0
if zAccl > 511 :
    zAccl -= 1024

# Output data to screen
print "X-Axis of Rotation : %d" %xAccl
print "Y-Axis of Rotation : %d" %yAccl
print "Z-Axis of Rotation : %d" %zAccl
