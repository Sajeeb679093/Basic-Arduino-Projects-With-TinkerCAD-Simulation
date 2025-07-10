# 🔐 Arduino-Based Password Protected Security System

A simple yet effective access control system using an Arduino, a 4x4 keypad, and visual/audio indicators. This project demonstrates core concepts in embedded authentication, perfect for DIY security applications or educational purposes.

---

## 📌 Project Overview

This Arduino-based system requires a user to enter a valid numeric password through a keypad. Upon correct entry, it grants access by lighting a green LED and playing an unlock melody. Incorrect passwords trigger a red LED and a buzzer alarm, simulating an access denial.

Whether you're building a digital lock for a cabinet, a prototype smart lock, or learning about authentication logic — this is a great starter project.

---

## 🧰 Required Components

| Component            | Quantity |
|---------------------|----------|
| Arduino Uno (or similar) | 1     |
| 4x4 Matrix Keypad    | 1        |
| Green LED (Access Granted) | 1   |
| Red LED (Access Denied)   | 1   |
| 220Ω Resistors       | 2        |
| Piezo Buzzer         | 1        |
| Breadboard           | 1        |
| Jumper Wires         | As needed |
| USB Cable / Power Supply | 1     |

---

## ⚙️ How It Works

### 🔢 Password Entry
- User enters a 5-digit password using the keypad.
- Each keypress triggers a short beep for feedback.
  
### ✅ Password Validation
- If the input matches the correct password (e.g., `12345`):
  - Green LED turns on.
  - A melodic unlocking tone plays via the buzzer.
- If the password is incorrect:
  - Red LED turns on.
  - A sharp buzzer sound alerts unauthorized access.

### 🔁 Reset and Retry
- After each attempt, the system resets and waits for the next input.
- Real-time monitoring of keypad ensures smooth user experience.

---

## 💡 Features

- 🔐 Password-protected entry
- 🔊 Audio feedback with buzzer
- ✅ Visual status indication using LEDs
- 🔁 Auto-reset after each attempt
- 🔧 Easy to customize password and tone

---

## 📚 Possible Applications

- Electronic door locks
- DIY home security systems
- Locker/cabinet protection
- Lab or classroom access control
- RFID upgrade foundation

---

## 📁 Code & Wiring

All Arduino code and circuit schematics are provided in the `/code` and `/schematics` folders (add these to your repo).

Wiring notes:
- Connect rows/columns of the 4x4 keypad to digital pins.
- Use resistors for LEDs to limit current.
- Connect buzzer to a PWM-capable pin for sound output.

---

## 🚀 Future Enhancements

- 🔄 Add password change feature with master code
- 🔒 Integrate servo motor to simulate lock/unlock mechanism
- 📲 Add Bluetooth module for mobile control
- 🔐 Upgrade to multi-user access with EEPROM memory
- 🛡️ Use a display (LCD/OLED) for user feedback

---

## 🏷️ Tags

`#Arduino` `#SecuritySystem` `#KeypadLock` `#AccessControl`  
`#PasswordProtected` `#DIYProject` `#Electronics` `#EmbeddedSystems`  
`#Tech` `#HomeSecurity` `#IoT`

---

## 🙌 Contributing

Found a bug or want to add features? Feel free to fork this project or open an issue!

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).

---

