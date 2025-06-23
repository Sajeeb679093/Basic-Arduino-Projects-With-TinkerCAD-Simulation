# 🔴🟢🔵 IR Remote Controlled LEDs with Arduino UNO

This project demonstrates how to control three different LEDs (Blue, Orange, and Green) using an IR remote and an Arduino UNO. The IR remote sends unique signals that are decoded by the Arduino and used to toggle the LEDs on or off.

---

## 📁 Project Structure

- **Hardware**: Arduino UNO, IR receiver module, 3 LEDs, resistors, breadboard, jumper wires.
- **Software**: Arduino IDE / Tinkercad Circuits, IRremote library.

---

## 🚀 Features

- Turn ON/OFF LEDs using IR remote buttons.
- IR codes decoded and mapped to specific actions.
- Serial Monitor output for IR code debugging.

---

## 🧰 Components Required

| Component            | Quantity |
|---------------------|----------|
| Arduino UNO         | 1        |
| IR Receiver Module  | 1        |
| IR Remote Control   | 1        |
| LEDs (Blue, Orange, Green) | 3        |
| Resistors (220Ω or 330Ω) | 3        |
| Breadboard          | 1        |
| Jumper Wires        | Several  |

---

## 🔌 Circuit Diagram

| Arduino Pin | Connected To         |
|-------------|----------------------|
| 12          | IR Receiver OUT      |
| 2           | Blue LED (via resistor) |
| 3           | Orange LED (via resistor) |
| 4           | Green LED (via resistor) |
| 5V          | IR Receiver VCC      |
| GND         | IR Receiver GND + LED cathodes |

---

## 💡 LED Control Mapping

| Remote Button | IR Code (Decimal) | Action              |
|---------------|-------------------|---------------------|
| 1             | -284115200        | Turn ON Blue LED    |
| 2             | -300826880        | Turn OFF Blue LED   |
| 3             | -317538560        | Turn ON Orange LED  |
| 4             | -350961920        | Turn OFF Orange LED |
| 5             | -367673600        | Turn ON Green LED   |
| 6             | -384385280        | Turn OFF Green LED  |

> ⚠️ **Note**: IR codes may vary depending on your remote. Use `Serial.println()` to detect actual values.

---

## 🛠 Setup Instructions

1. Open the [Tinkercad Circuits](https://tinkercad.com/) workspace or Arduino IDE.
2. Connect components as described above.
3. Upload the code to Arduino.
4. Open Serial Monitor to view decoded IR signals.
5. Press remote buttons to control the LEDs.

---
## 👤 Author

**Sajeeb Sarkar**  
Electrical & Electronic Engineering, KUET  
June 2025

---

## 📝 License

This project is for educational purposes only. You may use or modify it for personal or academic use.







