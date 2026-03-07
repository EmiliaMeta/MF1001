
# PWM-Controlled DC Motor with Encoder

## Project Overview

This project implements a **PWM-controlled DC motor system with an optical encoder** for measuring and monitoring rotational speed and angular position.

The system uses an **Arduino MKR 1010 WiFi** to read encoder data and upload it to **Arduino IoT Cloud**, where the data can be visualized in real time through an online dashboard.

A second subsystem using an **Arduino UNO**, H-bridge motor driver, and potentiometer is used to drive the motor and demonstrate controlled rotation.

The project demonstrates how **embedded systems, sensors, and IoT technologies** can be combined to monitor and control motor systems remotely.

---

# Objectives

The main objective of the project was to develop a prototype capable of:

- Reading encoder signals using an Arduino MKR
- Uploading sensor data to the internet via WiFi
- Visualizing rotation data in real time
- Controlling motor speed using a potentiometer
- Rotating the encoder using a DC motor

Additional goal:

- Control motor rotation in **both directions**

---

# System Architecture

The system consists of two main subsystems:

## 1. Measurement System

Responsible for measuring and transmitting rotational data.

Components:

- Optical encoder
- Arduino MKR 1010 WiFi
- Arduino IoT Cloud

Function:

1. The encoder detects shaft rotation.
2. The Arduino MKR reads encoder signals.
3. Data is processed and uploaded via WiFi.
4. Angular position and velocity are visualized in the IoT Cloud dashboard.

## 2. Motor Control System

Responsible for generating controlled rotation.

Components:

- DC motor
- Arduino UNO
- H-bridge motor driver
- Potentiometer
- 9V battery

Function:

1. The potentiometer sets the desired motor speed.
2. Arduino UNO reads the potentiometer value.
3. PWM signals are sent to the H-bridge.
4. The motor rotates with controlled speed and direction.

---

# Hardware Components

| Component | Description |
|--------|--------|
| DC Motor | Pololu Micro Metal Gearmotor HP 1000 6V |
| Optical Encoder | Pololu Optical Encoder 2590 5V |
| Motor Driver | DRV8833 Dual Motor Driver |
| Microcontroller | Arduino MKR 1010 WiFi |
| Microcontroller | Arduino UNO |
| Potentiometer | Manual motor speed control |
| Battery | 9V power supply |
| Breadboard | Circuit prototyping |
| Jumper wires | Electrical connections |

---

# Encoder Functionality

The optical encoder consists of:

- A perforated rotating disk
- Infrared emitters
- Light sensors

As the disk rotates, the sensors detect changes in light intensity when holes pass through the beam.

From these signals the system can calculate:

- Rotation direction
- Angular position
- Rotational velocity

---

# Motor Control

The motor is controlled using **PWM (Pulse Width Modulation)**.

PWM is implemented using Arduino's built-in function:

```
analogWrite(pin, pwmValue)
```

The potentiometer determines the PWM value, which directly controls the motor speed.

The **H-bridge motor driver** allows:

- Clockwise rotation
- Counter-clockwise rotation

by reversing the current through the motor.

---

# IoT Cloud Integration

Arduino IoT Cloud is used to monitor and visualize motor data.

The dashboard includes:

- **Angle meter** (shaft position)
- **Angular velocity meter** (rotational speed)
- **Real-time charts** showing system performance over time

Data from the encoder is uploaded via WiFi and displayed live in the dashboard.

---

# Software Overview

The system software is written in **C++ for Arduino**.

The program performs the following tasks:

1. Initialize encoder and cloud connection
2. Measure encoder pulses
3. Convert pulses to angle and rotational velocity
4. Upload values to Arduino IoT Cloud
5. Update dashboard in real time

Key measured values:

- Shaft angle
- Angular velocity (rev/s)

---

# Results

Testing confirmed that the prototype works according to the requirements.

### Encoder measurement
The encoder successfully measured motor rotation and transmitted the data to the IoT Cloud dashboard.

### Speed control
Adjusting the potentiometer changed the motor speed, which was immediately reflected in the angular velocity measurements.

### Remote monitoring
The system allowed real-time monitoring of motor performance through the internet.

### Bidirectional rotation
The motor could rotate in both directions using the H-bridge control.

---

# Applications

This type of system can be applied in several engineering fields:

- Industrial automation
- Robotics
- Electric vehicles
- Drone systems
- Smart home automation
- Precision motor control systems

The ability to **measure, visualize, and remotely monitor motor behavior** makes the solution useful for both research and industrial applications.

---

# Team Members

- Loke Lindberg Nilsson
- Oscar Olheden
- Isabella Bergström
- Emilia Lindqvist
- Sasithorn Bystedt
- Jegors Liteplo

---

# Course Context

Course: **MF1001**  
Project: **PWM-controlled DC motor with encoder**  
Institution: **KTH Royal Institute of Technology**
