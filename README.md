# Automatic-Non-Touch-Door-with-Arduino
This repo contains code for a non-touch automatic door using an Arduino.
## Requirements
- Hardware
	- Arduino Uno  
This is an open-source programmable microcontroller circuit.
	- 2004 I2C LCD  
	This is an output device, and in this project will be used to display results of one’s temperature and a message of denial/entry to the door prototype.
	- GY-906-BCC IR Infrared Thermometry Module  
	This is an infrared temperature sensor. It is specifically designed for use where non-contact temperature detection is desired.
	- Tower Pro MG90S Servo Motor  
	Servo motor is a DC motor used to control angular locus. It enables rotation of about 90° to 180°. It will be used to illustrate the opening and closing of the doors.
	- Buzzer  
	A buzzer is a speaker that is used to produce audio outputs.
	- Jumper Cables  
	They are used to connect the different components.
	- HC-SR501 Human Infrared Sensor  
	HC-SR501 Human Infrared Sensor is a Passive Infrared (PIR) Sensor used to detect some extent of infrared radiation. In this project, when warm temperature is detected it causes a positive differential change and when the warm temperature leaves the reverse occurs thus a negative differential change occurs.
	
- Software
	- Arduino IDE  
	The Arduino software is a text editor for writing codes in C and C++ programming languages, text console, and a message area. It links with Arduino hardware and allows uploading of programs to the Arduino board and communication between the IDE and the board.
	- An Operating System  
	You can use Windows, Mac OS X and Linux.

## Circuit Connection

![image](https://user-images.githubusercontent.com/40722560/201471090-a3105ad7-ac71-4b97-8624-d181af3c7e7b.png)

This can also be achieved by using [Circuito.io](https://www.circuito.io/).

## Implementation

![image](https://user-images.githubusercontent.com/40722560/201471343-5179d3fc-8aab-4246-83f0-121e14c2d305.png)


The picture above shows my connection.  
The door only opens if motion is detected and the themometry module measures temperatures within the normal human range (about 35 to 38 degrees celcius).

![image](https://user-images.githubusercontent.com/40722560/201471792-a4f95f85-f8ce-4dda-910f-7747a5d97b58.png)

The picture above shows the serial monitor.  
It shows the time, the output of the PIR sensor and the object temperature measured. The PIR sensor gives an output of logic 1 when motion is detected and logic 0 when there is no motion.

