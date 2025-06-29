# 🌡️ Digital Thermometer with LED Feedback using ATtiny85

This project showcases a **minimalist digital thermometer** built with the **ATtiny85 microcontroller** and an **LM35 temperature sensor**. Instead of using an LCD display, this system provides real-time **temperature feedback through an LED** that changes blink patterns based on ambient temperature. Ideal for **wearable tech**, **low-power environments**, and **display-less applications**.

---

## 🔧 Components Used

| Component         | Quantity | Notes                                |
|------------------|----------|--------------------------------------|
| ATtiny85          | 1        | 8-pin microcontroller                |
| LM35 Temperature Sensor | 1        | Analog output: 10mV per °C          |
| LED               | 1        | For temperature indication           |
| Resistor (220Ω)   | 1        | Current limiting for LED             |
| Breadboard / PCB  | 1        | Prototyping base                     |
| Jumper Wires      | Few      | Connections                          |
| USBasp Programmer | 1        | For uploading code to ATtiny85       |

---

## 🧠 System Overview

This thermometer uses an **LED as the only output**, making it perfect for situations where a screen isn't practical.

### 👁️‍🗨️ How It Works:

1. The **LM35** outputs an analog voltage to **analog pin A1 (PB2)** on the ATtiny85.
2. The microcontroller reads the analog voltage using `analogRead()`.
3. The voltage is converted into **Celsius** and **Fahrenheit**.
4. Based on the temperature range, the **LED blinks differently**:
   - **Cold (≤ 68°F)** → Slow blink every 1 second
   - **Moderate (70°F–116°F)** → Normal blink every 0.5 seconds
   - **Hot (123°F–238°F)** → Fast blink every 0.1 seconds
   - **Invalid / unsafe** → LED stays solid ON as a warning

---

## 📐 Temperature Conversion

The sensor outputs:  
> `10mV per °C`  
> e.g., 25°C = 250mV = 0.25V

**Conversion Formula:**

```c
Temp_C = analogVoltage * 100;
Temp_F = (Temp_C * 9 / 5) + 32;

