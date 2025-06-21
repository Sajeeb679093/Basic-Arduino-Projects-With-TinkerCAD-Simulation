# Servo Motor Sweep with Arduino (TinkerCAD)

This project shows how to control a servo motor using an Arduino UNO in TinkerCAD. The servo gradually rotates from 0° to 180°, pauses for a moment, and then smoothly returns back to 0°. The motion is created using a simple for-loop and the Servo library.

---

## 🧰 Components Used

- Arduino UNO  
- Servo Motor (3-pin)  
- Jumper Wires  
- Breadboard (optional)  
- TinkerCAD Circuit Simulator

---

## 👨‍💻 Made by  
**Sajeeb Sarkar**

---

## ⚙️ Circuit Connections

| Servo Wire     | Arduino Pin   |
|----------------|---------------|
| Signal (Yellow/Orange) | 7 (Digital PWM pin) |
| VCC (Red)      | 5V            |
| GND (Black/Brown) | GND        |

---

## 🔍 How It Works

- The `Servo` library is used to control the servo.
- In the `setup()`, the servo is attached to **digital pin 7**.
- In the `loop()`, two `for` loops rotate the servo:
  - First from **0° to 180°** (one step at a time with 15ms delay)
  - Then back from **180° to 0°**
- `delay(3000)` holds the servo at 180° for 3 seconds
- `delay(1000)` holds the servo at 0° for 1 second
- This motion repeats continuously

---

## 📌 Features

- Smooth rotation using small delays  
- Controlled sweep in both directions  
- Easy to simulate and test in TinkerCAD

---

## 🎯 Learning Outcomes

- Learn how servo motors work  
- Understand angle-based position control  
- Practice loops, delays, and signal pins in Arduino


