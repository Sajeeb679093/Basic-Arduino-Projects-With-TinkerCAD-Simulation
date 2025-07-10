# 🚗 Smart Parking System Using Arduino, IR Sensors, LCD & Servo

A compact and efficient smart parking solution built with Arduino that automates vehicle entry/exit, detects slot occupancy, and displays real-time availability on an LCD. Perfect for learning automation, sensor integration, real-time monitoring, and actuator control — all in one project!

---

## 📌 Project Overview

This project simulates a real-world parking system where:
- Vehicles are detected at the entry/exit gates using IR sensors.
- Entry and exit gates open automatically using servo motors.
- Slot availability is tracked with additional IR sensors.
- Real-time slot status is displayed on a 16x2 LCD screen.

> 🔄 Fully simulated on Tinkercad  
> 🎯 Ideal for beginners and automation enthusiasts.

---

## 🧰 Components Required

| Component             | Quantity |
|----------------------|----------|
| Arduino UNO          | 1        |
| IR Sensor Module     | 4        |
| Servo Motor (SG90)   | 2        |
| 16x2 LCD Display     | 1        |
| 10k Potentiometer    | 1 (for LCD contrast) |
| Breadboard + Wires   | As needed |
| USB Cable or 5V Power| 1        |

---

## ⚙️ Working Principle

### 🚘 Entry & Exit Detection
- **IR Sensor at Entry (D6)**: Detects an incoming vehicle.
- **IR Sensor at Exit (D13)**: Detects a leaving vehicle.
- When a vehicle is detected, the **corresponding gate opens via servo**, waits briefly, then closes automatically.

### 🅿️ Slot Monitoring
- **IR Sensor for Slot 1 (D7)**
- **IR Sensor for Slot 2 (D8)**
- Detects if a car is present in the respective parking slot.

### 📟 LCD Display (D12–D2)
- Displays real-time parking status:
  ```
  Slot 1: Free
  Slot 2: Occupied
  ```

---

## 🔌 Pin Configuration

| Arduino Pin | Connected To           | Description                      |
|-------------|------------------------|----------------------------------|
| D6          | Entry IR sensor OUT    | Detects car at entry gate        |
| D13         | Exit IR sensor OUT     | Detects car at exit gate         |
| D7          | Slot 1 IR sensor OUT   | Detects car in slot 1            |
| D8          | Slot 2 IR sensor OUT   | Detects car in slot 2            |
| D9          | Entry Servo Signal     | Opens/closes entry gate          |
| D10         | Exit Servo Signal      | Opens/closes exit gate           |
| D12–D2      | LCD RS, E, D4–D7       | LCD control pins (parallel)      |
| A4          | Potentiometer (optional)| Adjust contrast or future use    |
| 5V/GND      | All components         | Power supply and grounding       |

**Note:**  
- IR sensors return **LOW** when detecting an object.  
- Servo: `0° = Closed`, `90° = Open`.

---

## 🎯 Features

- ✅ Real-time vehicle detection at entry & exit
- ✅ Automatic servo-based gate control
- ✅ Parking slot monitoring and availability tracking
- ✅ LCD-based visual feedback
- ✅ Clean simulation in Tinkercad (no external library required)

---

## 🧠 What You’ll Learn

- IR sensor behavior and logic handling
- Servo control via digital signals
- LCD interfacing in parallel mode
- Managing multiple I/O components simultaneously
- Creating scalable embedded systems

---

## 📚 Possible Expansions

- 📶 **IoT Integration** using ESP8266 to show parking status online  
- 🆔 **RFID Card Access** for vehicle identification  
- 📱 **Mobile App Interface** for booking and tracking slots  
- 🎥 Add **Ultrasonic Sensor** or **Camera logic** for real-world distance measurement

---

## 🧪 Simulation Tips (Tinkercad)

- Use **"Object in Range"** on IR sensors to simulate car detection.  
- Monitor LCD output and Serial Monitor for live feedback.  
- Adjust **servo angle delays** to fine-tune gate operation timing.

---

## 🏁 Project Status

- ✔️ Simulated Successfully in Tinkercad  
- ✔️ Gates respond accurately to car detection  
- ✔️ LCD updates dynamically  
- 🚀 Ready to upgrade with RFID, app, or IoT modules  

---

## 🏷️ Tags

`#Arduino` `#SmartParking` `#Automation` `#IRSensor` `#LCDProject`  
`#ServoGate` `#EmbeddedSystems` `#TinkercadSimulation` `#DIYParkingSystem` `#VehicleDetection`

---

## 👨‍💻 Author

🔧 Part of **Akhinoor's 40 Arduino Project Series**  
💬 Want custom code or simulation links? Feel free to connect!

---

