# 🌈 NeoPixel LED Strip with Arduino – Dynamic Lighting Effects

This project demonstrates how to interface a **WS2812B NeoPixel LED strip** with an Arduino board to create **colorful, animated lighting effects** using the Adafruit NeoPixel library. The result is a vibrant chasing light pattern suitable for wearables, decorations, smart lighting systems, and interactive art.

---

## 🧰 Components Required

| Component                 | Quantity |
|---------------------------|----------|
| Arduino UNO / Mega / Nano | 1        |
| WS2812B NeoPixel LED Strip| 1        |
| External 5V Power Supply  | 1 (if >10 LEDs) |
| Jumper Wires              | Several  |
| Resistor (300–500Ω, optional) | 1    |
| Capacitor (1000µF, optional) | 1     |

---

## ⚙️ How It Works

- The NeoPixel data line is connected to a **digital pin** (e.g., pin 6) on the Arduino.
- The **Adafruit NeoPixel library** initializes and manages LED behavior.
- A custom animation function (e.g., `chase()`) lights up each LED in sequence, turning off the previous one.
- The animation cycles through multiple colors (red, green, blue, etc.).
- The `setPixelColor()` function sets individual LED colors, while `show()` updates the strip.

---

## 🔍 Working Principle

- NeoPixels operate using a **single-wire communication protocol**.
- Color data is sent in **GRB format** (not RGB).
- The animation logic:
  1. Lights up one LED with a given color.
  2. Turns the previous LED off.
  3. Updates the strip using `show()`.
  4. Adds a short delay to create the motion effect.
  5. Repeats across the strip.

---

## 🧪 Example Animation Flow

1. **Initialize** the strip in `setup()`.
2. **Define a color** (e.g., red, green, blue).
3. **Loop through each LED**:
   - Turn ON the current LED.
   - Turn OFF the previous LED.
   - Call `strip.show()`.
   - Add `delay(100)` for visible movement.
4. **Change color and repeat**.

---

## 🖥️ Required Library

Install the following library via **Arduino Library Manager**:

**Adafruit NeoPixel**  
📦 Author: Adafruit  
🔗 URL: [Adafruit_NeoPixel GitHub](https://github.com/adafruit/Adafruit_NeoPixel)

---

## ⚡ Power Consideration

- NeoPixel LEDs **draw significant current**. Each RGB LED can use up to 60 mA at full brightness (white).
- For strips longer than **10 LEDs**, use a **dedicated 5V external power supply**.
- **Important**: Connect **GND of Arduino, NeoPixel, and external power supply together** to avoid flickering or data errors.

---

## 🛠️ Optional Enhancements

- Add **brightness control** using a potentiometer.
- Sync animations to **sound** with a microphone or sound sensor.
- Implement effects like:
  - **Rainbow cycle**
  - **Breathing (pulsing) light**
  - **Color wipe or fade**

---

## 🎯 Learning Outcomes

- Interfacing NeoPixel (WS2812B) strips with Arduino.
- Understanding **GRB color control** and animation logic.
- Managing real-time updates using the Adafruit library.
- Safe power distribution and hardware protection for LED projects.

---

## 🧠 Suggested Use Cases

- Wearable electronics (costumes, cosplay)
- Decorative or ambient lighting
- IoT smart home projects
- Music-reactive visual displays
- Mood lights for desks or rooms

---

## 🏷️ Hashtags

#Arduino #NeoPixel #WS2812B #LEDStrip #DynamicLighting #EmbeddedSystems #Adafruit #IoT #DIYProjects #TechArt #SajeebProjects

---

## 👨‍💻 Author

**Sajeeb Sarkar**  
Undergraduate Student, EEE – KUET  
Passionate about embedded systems, lighting tech, and smart electronics.  
📅 Project Date: June 2025

---

## 📜 License

This project is provided for educational and non-commercial use. Attribution is appreciated.  
NeoPixel control logic and library usage © Adafruit Industries.


