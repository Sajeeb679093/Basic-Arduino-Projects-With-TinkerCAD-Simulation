# ☀️ Intelligent Dual-Axis Solar Tracker Using Arduino and LDRs

A real-time dual-axis solar tracking system built with Arduino, LDRs, and servo motors to maximize solar panel efficiency by automatically aligning with the sun’s position throughout the day.

---

## 📌 Overview

Static solar panels often lose energy due to suboptimal orientation. This intelligent tracking system overcomes that by dynamically adjusting the solar panel's angle using sensors and servos. The result? A significant increase in solar energy collection.

---

## 🧰 Components Required

| Component               | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| LDRs (Light Sensors)   | 4        |
| 10kΩ Resistors         | 4        |
| Servo Motors (SG90/MG996R or similar) | 2 |
| Breadboard             | 1        |
| Jumper Wires           | As needed |
| Power Supply (5V)      | 1        |
| Solar Panel (Optional) | 1        |

---

## ⚙️ How It Works

The system uses **four LDRs** placed in a cross-shaped pattern to detect light intensity from different directions. Based on the readings:

- **Vertical Movement** (tilt): Top vs Bottom LDRs
- **Horizontal Movement** (rotation): Left vs Right LDRs

A predefined threshold (`tol`) ensures only significant light differences trigger movement, preventing jitter.

---

## 🔦 Sensor Configuration

```
        [LDR A0]     [LDR A2]
           TL           TR

           ↑ Solar Panel ↑

        [LDR A1]     [LDR A3]
           BL           BR
```

Each LDR is connected to an analog pin on the Arduino. The average light intensity is computed for top vs bottom and left vs right to determine direction.

---

## 🔄 Servo Control

| Axis         | Servo Pin | Function           |
|--------------|-----------|--------------------|
| Horizontal   | D9        | Rotates left/right |
| Vertical     | D10       | Tilts up/down      |

Servo angles are adjusted gradually with limits to avoid mechanical damage.

---

## 🧠 Logic Flow

1. Read all 4 LDR values.
2. Calculate average top, bottom, left, and right intensities.
3. Compare differences with threshold.
4. If difference > threshold:
   - Move the relevant servo slightly.
5. If within threshold:
   - Keep servos idle to save power and reduce wear.

---

## ✅ Benefits

- Real-time adaptive tracking
- Maximizes energy efficiency of solar panels
- Educational hands-on example of embedded systems and sensors
- Demonstrates practical applications of IoT and automation

---

## 🌍 Potential Applications

- Smart solar energy systems
- IoT-enabled green energy farms
- University-level engineering projects
- STEM and robotics learning kits

---

## 🚀 Possible Future Enhancements

- 🕒 **RTC Integration**: Enable time-based tracking for cloudy days.
- 🔋 **Voltage Monitoring**: Measure power output from the panel.
- 🧠 **PID Control**: Improve tracking precision using feedback loops.
- 📡 **Remote Monitoring**: Connect to IoT dashboard for live tracking data.

---

## 📸 Project Snapshots

*You can add your project images or GIFs here to showcase the system in action.*

---

## 📁 Code & Schematics

You can find the full Arduino sketch and wiring diagram in the `/code` and `/schematics` folders respectively.

---

## 🏷️ Tags

`#ArduinoProject` `#SolarTracker` `#LDRSensor` `#DualAxis` `#SmartSolar`  
`#RenewableEnergy` `#ServoMotor` `#IoTProject` `#Automation` `#EmbeddedSystems`

---

## 🙌 Contributing

Found a bug or want to suggest an improvement? Pull requests and issues are welcome!

---

## 📜 License

This project is open-source and free to use under the MIT License.

---

