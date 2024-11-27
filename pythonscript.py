#Python Script code 
import serial
import time
import pyautogui

# Replace 'COM3' with the correct port, for example 'COM4'
ArduinoSerial = serial.Serial('COM3', 9600)  # Open the serial port
time.sleep(2)  # Give some time for the connection to initialize

while True:
    if ArduinoSerial.in_waiting > 0:  # If data is waiting in the buffer
        incoming = ArduinoSerial.readline().decode().strip()/
        print("Received:", incoming)

        if incoming == "LEFT":
            pyautogui.press('left')  # Change slide to the left
            pyautogui.hotkey('volumeup')  # Decrease volume
            print("Slide Left and Decrease Volume")

        elif incoming == "RIGHT":
            pyautogui.press('right')  # Change slide to the right
            pyautogui.hotkey('volumedown')  # Increase volume
            print("Slide Right and Increase Volume")

        time.sleep(2)  # Add delay to avoid multiple triggers    
