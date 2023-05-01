# Smart-Vehicle-Control-with-Alcohol-Detection
Prevent drunk driving and overspeeding with Arduino. Detects alcohol and speed; stops car if alcohol's high, slows if overspeeding. Components: LCD, buzzer, LEDs, motor driver, speed &amp; alcohol sensors, DC motor. Edu project promoting responsible driving.



This project is designed to prevent drunk driving and overspeeding, which are the two major causes of road accidents. It uses an Arduino microcontroller to detect alcohol levels in the driver's breath and the speed of the vehicle. If the alcohol level is above the limit, the vehicle will not start, and if the speed exceeds the limit, the vehicle will be slowed down automatically.

### Components Required
Arduino Uno
Alcohol Sensor Module
Speed Sensor Module
Motor Driver Module
DC Motor
LCD Display
Buzzer
LEDs
Breadboard
Jumper Wires
Power Supply
Circuit Diagram
Circuit Diagram

### Working
The alcohol sensor module detects alcohol levels in the driver's breath and sends the data to the Arduino. If the alcohol level is above the limit, the Arduino sends a signal to the motor driver module, which stops the DC motor from starting.

The speed sensor module detects the speed of the vehicle and sends the data to the Arduino. If the speed exceeds the limit, the Arduino sends a signal to the motor driver module, which slows down the DC motor.

The LCD display shows the alcohol level and the speed of the vehicle. The buzzer and LEDs are used to alert the driver if the alcohol level is above the limit or the speed is too high.

## Installation
Clone the repository to your local machine.
Connect the components as shown in the circuit diagram.
Upload the code to the Arduino using the Arduino IDE.
Power on the circuit using a suitable power supply.
## Usage
Turn on the power supply.
Wait for the Arduino to initialize.
Blow into the alcohol sensor module.
If the alcohol level is below the limit, the vehicle will start.
Drive the vehicle within the speed limit.
If the speed exceeds the limit, the vehicle will be slowed down automatically.
If the alcohol level exceeds the limit, the vehicle will not start.
If the alcohol level is above the limit while driving, the buzzer will sound, and the LEDs will light up to alert the driver.
## Note
This project is for educational purposes only and should not be used to encourage or promote drunk driving. Always drive responsibly and never drink and drive. It is important to note that this project is intended to raise awareness about the dangers of drunk driving and to encourage responsible driving habits. It should not be used as a substitute for proper law enforcement or as a means to evade legal consequences for drunk driving.

Moreover, this project is a prototype, and it may not be suitable for deployment in real-world scenarios. It is recommended that any modifications or improvements to the project should be thoroughly tested and evaluated before implementation.

Finally, it is the responsibility of every individual to drive responsibly and to never drink and drive. Remember, your actions can have serious consequences not only for yourself but also for others on the road. So, always be a responsible driver and help make the roads safer for everyone.
