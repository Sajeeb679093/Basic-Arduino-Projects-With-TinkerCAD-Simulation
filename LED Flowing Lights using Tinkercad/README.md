# LED Flowing Lights using Arduino (TinkerCAD)

This project creates a flowing or chasing light pattern using 8 LEDs connected to an Arduino UNO. The LEDs turn ON one after another from pin 1 to pin 8, and then turn OFF in the same sequence. The project is built and simulated using **TinkerCAD**.

---

## 🧰 Components Used

- Arduino UNO  
- 8 × LEDs (any color)  
- 8 × 220Ω Resistors  
- Jumper Wires  
- Breadboard  
- TinkerCAD Circuit Simulator

---

## 👨‍💻 Made by  
**Sajeeb Sarkar**

---

## 🎯 Project Objective

To simulate a "flowing" light effect using basic **`for` loops** in Arduino, demonstrating how digital pins can control multiple outputs efficiently.

---

## 🖼️ How It Looks (Example Behavior)

[🔴] [ ] [ ] [ ] [ ] [ ] [ ] [ ] ← LED 1 ON
[✔️] [🔴] [ ] [ ] [ ] [ ] [ ] [ ] ← LED 2 ON
...
[✔️] [✔️] [✔️] [✔️] [✔️] [✔️] [✔️] [🔴] ← LED 8 ON
Then OFF one by one in same order...

---

## ⚙️ Circuit Connections

| LED # | Anode (+) → Arduino Pin | Cathode (–) → Resistor → GND |
|-------|--------------------------|-------------------------------|
| 1     | D1                       | GND via 220Ω                 |
| 2     | D2                       | GND via 220Ω                 |
| 3     | D3                       | GND via 220Ω                 |
| 4     | D4                       | GND via 220Ω                 |
| 5     | D5                       | GND via 220Ω                 |
| 6     | D6                       | GND via 220Ω                 |
| 7     | D7                       | GND via 220Ω                 |
| 8     | D8                       | GND via 220Ω                 |

> ⚠️ Make sure each LED has its own resistor to avoid damage.

---

## 💡 How It Works

- **Setup Phase (`setup()`):**  
  All pins from 1 to 8 are declared as **OUTPUT** using a `for` loop to save space and code.

- **Loop Phase (`loop()`):**  
  - First, it **turns ON** LEDs one by one from pin 1 to 8 with a 300 ms delay between each.
  - Then, it **turns OFF** the same LEDs in order from pin 1 to 8, again with 300 ms delay.
  - This creates a smooth **forward flowing light effect**.

---

## 🧠 Learning Outcomes

- Learn how to use `for` loops in Arduino to reduce repetitive code  
- Understand how to control **multiple digital output pins**  
- Practice LED animation techniques  
- Explore timing and delays for animation control  
- Use of simulation tools like **TinkerCAD** for circuit design

---

## 🚀 Possible Extensions

- Reverse the flow (from pin 8 to pin 1)  
- Add speed control using a potentiometer  
- Use `millis()` instead of `delay()` for non-blocking version  
- Add RGB LEDs and control colors

---

## 🧪 Tested On

- **TinkerCAD** (Online simulator)  
- Arduino UNO R3 Board  
- Works with most basic Arduino setups

---

## 📚 License

This project is open-source. You may use and modify it freely with credit to the author.

---

## 🔗 About the Author

**Sajeeb Sarkar**  
First-year EEE student | Arduino & Electronics Enthusiast  
📍 KUET (Bangladesh)


