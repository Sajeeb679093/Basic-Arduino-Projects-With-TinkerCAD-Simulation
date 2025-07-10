# 🌡️ Digital Thermometer Using Arduino & LCD

This project demonstrates a simple and accurate digital thermometer system using the LM35 analog temperature sensor and a 16x2 LCD display. It reads real-time temperature data, converts it into Fahrenheit, and displays the result on-screen — making it a perfect beginner project for exploring sensors, analog input, and LCD interfacing with Arduino.

---

## 📌 Project Overview

With just a few components, you can create a standalone temperature monitoring system that displays the temperature in Fahrenheit on an LCD. It’s a great way to understand the basics of:

- Analog sensor data acquisition
- Voltage-to-temperature conversion
- LCD display programming

---

## 🧰 Components Required

| Component                 | Quantity |
|--------------------------|----------|
| Arduino Uno (or compatible) | 1     |
| LM35 Temperature Sensor   | 1        |
| 16x2 LCD Display (HD44780) | 1       |
| Breadboard                | 1        |
| Jumper Wires              | As needed |
| 10K Potentiometer (for LCD contrast) | 1 (optional) |

---

## ⚙️ System Working Principle

### 🌡️ Temperature Sensing
- The **LM35 sensor** outputs a voltage linearly proportional to the temperature (10 mV per °C).
- The Arduino reads this analog voltage using `analogRead()` on **A0 pin**.

### 🔢 Conversion Logic
- Convert analog reading (0–1023) into voltage:
  ```
  Voltage = (analogRead(A0) * 5.0) / 1023.0
  ```
- Convert voltage to °C:
  ```
  Celsius = Voltage * 100
  ```
- Convert °C to °F:
  ```
  Fahrenheit = (Celsius × 9 / 5) + 32
  ```

### 🖥️ Display Output
- A **16x2 LCD** shows:
  - Line 1: Welcome or label (e.g., "Room Temp Monitor")
  - Line 2: Live temperature in °F, including the degree symbol `(char)178`.

---

## 💡 Features

- Real-time temperature monitoring
- Smooth Fahrenheit display on LCD
- Simple, low-power, and accurate
- Customizable for other temperature units or display types

---

## 🧠 Learning Outcomes

- Interfacing analog sensors with microcontrollers
- Analog-to-digital conversion (ADC) principles
- LCD control using the `LiquidCrystal` library
- Temperature conversion formulas
- Display formatting and real-time updates

---

## 📚 Possible Applications

- Indoor temperature display system
- Greenhouse or environmental monitoring
- IoT-based smart home modules
- Classroom/learning lab projects
- Embedded systems prototyping

---

## 📁 Code & Circuit

The Arduino sketch and Fritzing wiring diagram are available in:
- `/code` folder → Arduino `.ino` file
- `/schematics` folder → Circuit connection diagram

Wiring Notes:
- LM35:
  - VCC → 5V
  - GND → GND
  - OUT → A0
- LCD:
  - Connect using 4-bit mode (RS, E, D4–D7)
  - Use a 10K potentiometer to control contrast (optional)

---

## 🚀 Potential Improvements

- 🌐 Add Wi-Fi/Bluetooth module for remote monitoring
- 🕒 Include RTC module to timestamp readings
- 📊 Display temperature trend on OLED or graphical display
- 📲 Send temperature alerts via SMS or mobile app
- 🔋 Battery power and sleep mode for energy efficiency

---

## 🏷️ Tags

`#Arduino` `#DigitalThermometer` `#TemperatureSensor` `#LM35`  
`#LCDDisplay` `#EmbeddedSystems` `#IoT` `#RealTimeMonitoring`  
`#DIYElectronics` `#ArduinoProjects`

---

## 🙌 Contributing

Pull requests, bug fixes, or feature suggestions are welcome. Let’s build smarter and cleaner projects together!

---

## 📜 License

This project is open-source and licensed under the [MIT License](LICENSE).

---

