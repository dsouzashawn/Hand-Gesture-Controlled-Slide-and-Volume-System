![image](https://github.com/user-attachments/assets/06a370bb-2117-4be8-b0d7-5826a354d4ee)

# Hand-Gesture-Controlled-Slide-and-Volume-System
Developed a hands-free system to control slide navigation and volume using ultrasonic sensors and Arduino. The system detects hand gestures, processes them with Arduino, and triggers actions like slide changes or volume control via a Python script.

# Hardware Requirements 
The system consists of an Arduino Uno as the microcontroller for controlling the sensors and communicating with the Python script. Two HC-SR04 ultrasonic sensors detect hand proximity on the left and right sides. Jumper wires are used for connecting the sensors to the Arduino, and a breadboard (optional) can be used to organize the connections. A computer runs the Python script and is connected to the Arduino for serial communication. Speakers (optional) are used to test volume adjustments, requiring proper sound settings configuration.

# Software Requirements
The project requires the Arduino IDE to upload the code to the Arduino board. Python 3.x is used to run the script that processes data from the Arduino. The pySerial library enables serial communication between the Arduino and Python, while the pyautogui library simulates keypresses for controlling slide navigation and volume adjustment.
