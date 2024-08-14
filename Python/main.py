import serial, time
from pynput.keyboard import Key, Controller

ser = serial.Serial('COM6', 9600)
keyboard = Controller()

print("Start")
time.sleep(5.0)

while True:
    if ser.in_waiting > 0:
        line = ser.readline().decode('utf-8').strip()
        if line == 'W_P':
            keyboard.release('s')
            keyboard.press('w')
        # elif line == 'W_R':
        #     keyboard.release('w')
        elif line == 'S_P':
            keyboard.release('w')
            keyboard.press('s')
        # elif line == 'S_R':
        #     keyboard.release('s')
