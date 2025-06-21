# Interfacing TMP36 Temperature Sensor with Arduino (TinkerCAD)

This project demonstrates how to use the **TMP36 analog temperature sensor** with an **Arduino UNO** to read and display real-time temperature in Celsius. The simulation was created using **TinkerCAD**.

---

## 🧰 Components Used

- Arduino UNO  
- TMP36 Temperature Sensor  
- Jumper Wires  
- Breadboard  
- TinkerCAD Circuit Simulator

---

## 👨‍💻 Made by  
**Sajeeb Sarkar**

---

## ⚙️ Circuit Connections

- TMP36 **VCC** → Arduino **5V**  
- TMP36 **GND** → Arduino **GND**  
- TMP36 **OUT** → Arduino **A0 (Analog pin)**

---

## 🔎 How It Works

- The TMP36 outputs a voltage that changes with temperature.
- Arduino reads this voltage from pin A0.
- The analog value is converted to Celsius using a simple formula.
- The result is printed to the Serial Monitor in real time.

> Temperature (°C) = (analogReading × 5.0 / 1024 − 0.5) × 100

---

## 📌 Project Highlights

- Accurate temperature reading without digital sensors  
- Simple wiring and easy to simulate in TinkerCAD  
- Good for learning analog-to-digital conversion

---

## 🧠 Learning Outcomes

- Understand analog sensors  
- Practice voltage-to-temperature conversion  
- Learn how to read analog data with Arduino


