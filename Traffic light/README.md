# 🚦 Traffic Light System with Push Button | Arduino Project

This project simulates a **basic traffic light system** using an Arduino and a push button. The system remains idle until the button is pressed, at which point it triggers a **red → yellow → green** LED sequence, imitating a real-world traffic signal. Perfect for beginners exploring embedded systems, digital I/O, and sequential logic using Arduino.

---

## 🧠 Project Summary

| Feature            | Description                          |
|-------------------|--------------------------------------|
| 🛑 Red LED         | Signals "Stop" for 2 seconds         |
| ⚠️ Yellow LED      | Signals "Get Ready" for 2 seconds     |
| ✅ Green LED       | Signals "Go" for 2 seconds            |
| 🔘 Push Button     | Triggers the light sequence          |
| 🔁 Loop Behavior   | Waits for button press to repeat     |

---

## 🧰 Components Required

- 1 × Arduino Uno / Nano / Mega  
- 1 × Red LED  
- 1 × Yellow LED  
- 1 × Green LED  
- 1 × Push Button  
- 3 × 220Ω Resistors (for LEDs)  
- 1 × 10kΩ Resistor (for button pull-down)  
- Breadboard & Jumper Wires  
- USB Cable (for uploading code)

---

## ⚙️ How It Works

1. The system **waits in idle state** (all LEDs OFF).
2. When the **push button is pressed**, the traffic light sequence begins:
   - 🔴 Red LED ON → 2s
   - 🟡 Yellow LED ON → 2s
   - 🟢 Green LED ON → 2s
3. After the sequence, all LEDs turn OFF and wait for the next button press.

---

## 🔌 Circuit Diagram

```plaintext
Button ---> Digital Pin 2 (with pull-down resistor)
Red LED ---> Digital Pin 8 (via 220Ω resistor)
Yellow LED ---> Digital Pin 9 (via 220Ω resistor)
Green LED ---> Digital Pin 10 (via 220Ω resistor)

