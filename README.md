# PWM-Controlled DC Motor with Encoder

An embedded systems project implementing a **PWM-controlled DC motor** with an **optical encoder** for measuring and monitoring rotational speed and angular position in real time.

Built using two Arduino microcontrollers, an H-bridge motor driver, and **Arduino IoT Cloud** for live data visualization via WiFi.

> Group project for course MF1001 at KTH Royal Institute of Technology.  
> **My contributions:** IoT Cloud integration, Arduino firmware, and project report.

---

## System Architecture

The system consists of two subsystems:

**Measurement System** — reads encoder signals and streams data to the cloud:
- Optical encoder detects shaft rotation
- Arduino MKR 1010 WiFi processes signals and uploads via WiFi
- Angular position and velocity visualized live in Arduino IoT Cloud dashboard

**Motor Control System** — drives the motor at controlled speed and direction:
- Potentiometer sets desired speed
- Arduino UNO reads input and sends PWM signals to H-bridge
- H-bridge enables both clockwise and counter-clockwise rotation

---

## Hardware Components

| Component | Details |
|-----------|---------|
| DC Motor | Pololu Micro Metal Gearmotor HP 1000 6V |
| Optical Encoder | Pololu Optical Encoder 2590 5V |
| Motor Driver | DRV8833 Dual Motor Driver |
| Microcontroller 1 | Arduino MKR 1010 WiFi |
| Microcontroller 2 | Arduino UNO |
| Potentiometer | Manual speed control input |
| Power | 9V battery |

---

## How It Works

**Motor control** uses Arduino's built-in PWM function:
```cpp
analogWrite(pin, pwmValue);
```
The potentiometer value maps directly to PWM duty cycle, controlling motor speed. The H-bridge reverses current direction to enable bidirectional rotation.

**Encoder measurement** uses an optical disk with infrared emitters and light sensors. As the disk rotates, the sensors detect light pulses and calculate:
- Rotation direction
- Angular position (degrees)
- Rotational velocity (rev/s)

**IoT Cloud dashboard** displays:
- Live angle meter
- Live angular velocity meter
- Real-time performance charts

---

## Software

Written in **C++ for Arduino**. The firmware:
1. Initializes encoder and IoT Cloud connection
2. Reads encoder pulses continuously
3. Converts pulses to angle and angular velocity
4. Uploads values to Arduino IoT Cloud
5. Updates the dashboard in real time

---

## Results

- Encoder successfully measured rotation and streamed data to IoT Cloud
- Potentiometer adjusted motor speed with immediate feedback in dashboard
- Real-time remote monitoring via internet
- Bidirectional rotation confirmed via H-bridge control

---

## Team

Loke Lindberg Nilsson · Oscar Olheden · Isabella Bergström · **Emilia Lindqvist** · Sasithorn Bystedt · Jegors Liteplo

---

## Author

**Emilia Lindqvist** — KTH Information Technology  
[GitHub Profile](https://github.com/EmiliaMeta)
