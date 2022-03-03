import smbus
import time


from random import randrange


bus = smbus.SMBus(1)
address = 0x08

def writeNumber(a):
    bus.write_i2c_block_data(address, a, [a])
    return -1


while True:
    try:   
        writeNumber(randrange(50))
        time.sleep(5)                    #delay five seconds

    except KeyboardInterrupt:
        quit()
