# 🎨 RGB LED Color Mixing with Arduino using PWM

This project demonstrates how to control a **Common Cathode RGB LED** using **Pulse Width Modulation (PWM)** on an Arduino. By varying the brightness of red, green, and blue channels, we can create smooth color transitions and learn the fundamentals of **PWM, color blending**, and **analog simulation using digital signals**.

---

## 🧰 Components Required

| Component                   | Quantity |
|----------------------------|----------|
| Arduino UNO / Mega / Nano  | 1        |
| Common Cathode RGB LED     | 1        |
| Resistors (220Ω or 330Ω)   | 3        |
| Breadboard                 | 1        |
| Jumper Wires               | Several  |

---

## ⚙️ How It Works

### 🔌 Hardware Connections

| RGB LED Pin | Arduino PWM Pin |
|-------------|------------------|
| Red         | 11               |
| Green       | 10               |
| Blue        | 9                |
| Cathode     | GND              |

> 💡 Resistors must be placed in series with each color pin to limit current and protect the LED.

---

### 🌈 PWM-Based Color Control

- Arduino’s `analogWrite()` function sends **PWM signals** to control brightness.
- Mixing different intensities of red, green, and blue produces various colors.

| RGB Values        | Resulting Color |
|-------------------|------------------|
| (255, 0, 0)       | Red              |
| (0, 255, 0)       | Green            |
| (0, 0, 255)       | Blue             |
| (255, 255, 255)   | White            |
| (128, 0, 128)     | Purple           |
| (0, 0, 0)         | Off              |

### ⏱️ Color Transition Logic

- The code cycles through multiple colors with a **500ms delay** between changes.
- You can increase or decrease the delay for smoother or faster transitions.

---

## 🧠 Working Principle

- **PWM (Pulse Width Modulation)** allows Arduino to simulate analog brightness by rapidly switching voltage ON/OFF.
- Each RGB channel receives a specific **duty cycle** (0–255) to control how long it stays ON per cycle.
- Mixing these intensities results in a broad **spectrum of colors**.

---

## 📚 Applications

- 🎨 Ambient and decorative lighting
- ⚙️ Color-based feedback systems
- 👨‍🎓 Hands-on learning for PWM and RGB blending
- 🖥️ UI components with visual indicators

---

## 🛠️ Optional Improvements

- Add **potentiometers** for manual RGB intensity control.
- Integrate **buttons** to switch color modes manually.
- Sync LED changes to music using **sound sensors**.
- Control RGB remotely via **Bluetooth or IR remote**.

---

## 🏷️ Hashtags

#Arduino #PWM #RGBLED #ColorControl #LEDProjects #Electronics #EmbeddedSystems #AnalogSimulation #DIYLighting #IoT #SajeebProjects

---

## 👤 Author

**Sajeeb Sarkar**  
Department of Electrical & Electronic Engineering  
KUET – Bangladesh  
📅 Project Date: June 2025

---

## 📜 License

This project is intended for learning and personal experimentation. You are free to use, modify, and share it for non-commercial purposes. Attribution is appreciated.

