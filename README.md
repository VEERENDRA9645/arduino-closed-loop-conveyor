# Arduino-Based Closed-Loop Conveyor System

## 📌 Project Overview

The Arduino-Based Closed-Loop Conveyor System is an embedded-system project designed to control and monitor a DC motor-driven conveyor. The system uses an Arduino microcontroller as the main control unit to regulate the motor's speed and direction.

A potentiometer is used to vary the DC motor speed from 0% to 100%, while a 16×2 LCD displays important operating parameters in real time. The project demonstrates the application of microcontrollers, motor control, user input, and display interfacing in a simple industrial automation system.

---

## 🎯 Objectives

- Develop an Arduino-based conveyor control system.
- Control the speed of a DC motor from 0% to 100%.
- Provide control over the motor direction.
- Display important operating parameters using a 16×2 LCD.
- Demonstrate embedded-system concepts for motor control and automation.

---

## ⚙️ Features

- Arduino-based control
- DC motor speed control
- Motor direction control
- Potentiometer-based speed adjustment
- 0–100% speed control
- 16×2 LCD monitoring
- Simple and user-friendly operation
- Suitable for automation and educational applications

---

## 🔧 Hardware Components

- Arduino Microcontroller
- DC Motor
- Motor Driver Module
- Potentiometer
- 16×2 LCD Display
- Conveyor Mechanism
- Power Supply
- Connecting Wires

---

## 💻 Software & Technologies

- Arduino IDE
- Embedded C/C++
- Arduino Microcontroller Programming
- DC Motor Control
- LCD Interfacing
- Potentiometer Input
- Closed-Loop Control Concepts

---

## 🔄 Working Principle

The Arduino acts as the central controller of the system. The potentiometer provides an input corresponding to the desired motor speed. The Arduino reads this input and generates an appropriate control signal for the motor driver.

The motor driver interfaces the Arduino with the DC motor and controls the motor's speed and direction. The 16×2 LCD provides real-time information about important operating parameters.

The system therefore combines user input, microcontroller-based processing, motor control, and display interfacing to operate the conveyor.

## 🎥 Project Demonstration

[▶️ Watch the Project Demonstration](https://drive.google.com/file/d/1Jj86ETv7pQv7pJjzgRMv7nwQ7uJrXRx5/view?usp=drivesdk)

---

## 🏗️ System Block Diagram

```text
        Potentiometer
              │
              ▼
      ┌─────────────────┐
      │     Arduino     │
      │  Microcontroller│
      └────────┬────────┘
               │
       Control Signal
               │
               ▼
      ┌─────────────────┐
      │   Motor Driver  │
      └────────┬────────┘
               │
               ▼
          DC Motor
               │
               ▼
        Conveyor System

        Arduino
           │
           ▼
       16×2 LCD

