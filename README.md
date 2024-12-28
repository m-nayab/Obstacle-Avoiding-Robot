**Obstacle-Avoiding Robot**

**1. Introduction**

This project implements a simple obstacle-avoiding robot using an Arduino Uno. 

**2. Project Setup**

1. **Hardware:** Assemble the robot using the provided components: Arduino Uno, motors, motor driver, ultrasonic sensor, chassis, wheels, and jumper wires.
2. **Software:** 
   - Clone this repository: https://github.com/m-nayab/Obstacle-Avoiding-Robot.git
   - Open the Arduino IDE.
   - Open the `obstacle_avoidance.ino` file from the cloned repository.
   - Upload the code to the Arduino Uno.

**3. Components**

* **Microcontroller:** Arduino Uno
* **Sensors:** HC-SR04 Ultrasonic Sensor
* **Actuators:** Motors, Motor Driver
* **Other:** Chassis, Wheels, Jumper Wires

![components](https://github.com/user-attachments/assets/f42f09ba-16b3-4977-8adb-6e634aab1b38)


**4. Software**

* **Programming Language:** C++
* **Libraries:** Arduino libraries for motor control and sensor reading.
* **Algorithm:** Basic obstacle avoidance: 
    - Read distance from the ultrasonic sensor.
    - If an obstacle is detected, stop, reverse, and turn.
    - Otherwise, move forward.
