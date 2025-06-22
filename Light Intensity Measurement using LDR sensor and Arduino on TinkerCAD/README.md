# Light Intensity Measurement using LDR and Arduino (TinkerCAD)

This project uses an **LDR (Light Dependent Resistor)** with an **Arduino UNO** to detect light intensity and turns ON an **LED** when the light level falls below a certain threshold. The system is built and simulated using **TinkerCAD**.

---

## 🧰 Components Used

- Arduino UNO  
- LDR (Photoresistor)  
- 2 × 220Ω Resistors  
  - 1 for the voltage divider  
  - 1 for current-limiting the LED  
- 1 × LED  
- Jumper Wires  
- Breadboard  
- TinkerCAD Circuit Simulator

---

## 👨‍💻 Made by  
**Sajeeb Sarkar**

---

## ⚙️ Circuit Connections

| Component        | Arduino Pin        |
|------------------|--------------------|
| LDR 1st Leg      | 5V                 |
| LDR 2nd Leg      | A0 + 220Ω → GND    |
| LED (+)          | Pin 13 (Digital)   |
| LED (–)          | GND via 220Ω       |

> The LDR and resistor form a **voltage divider**, giving variable voltage at A0 based on light level.

---

## 🔍 How It Works

- **In bright light:**  
  - LDR resistance is low → Voltage at A0 is high → LED stays OFF

- **In darkness or low light:**  
  - LDR resistance increases → Voltage at A0 drops  
  - If it drops below a threshold, the Arduino turns ON the LED

- The analog value from A0 is also printed in the **Serial Monitor**

---

## 📟 Sample Serial Output

LDR Value: 800
LDR Value: 400 ← LED turns ON
LDR Value: 900

---

## 📌 Features

- Real-time ambient light detection  
- Automatic LED lighting in low-light conditions  
- Easy to build and simulate using **TinkerCAD**

---

## 🧠 Learning Outcomes

- Understand **voltage dividers** using LDRs  
- Use of `analogRead()` and digital outputs  
- Simple threshold-based decision-making in Arduino  
- Control LEDs with sensor input

---

## 🔗 Tools Used

- Arduino UNO  
- TinkerCAD Circuit Designer  
- Arduino IDE (optional)

---

## 📝 Notes

- You can adjust the threshold in the code to tune sensitivity  
- Works well for light-based automation projects (e.g., automatic night lamps)


