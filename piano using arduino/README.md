# 🎹 Arduino Piano – Play Notes with Buttons

Build your own mini piano using an Arduino, push buttons, and a piezo buzzer! Each button triggers a musical note, allowing you to play simple tunes with ease. This beginner-friendly project demonstrates tone generation and input handling on an Arduino.

---

## 🧰 Components Needed

- 🎛️ Arduino Board (Uno, Mega, Nano, etc.)
- 🔘 8 Push Buttons
- 📢 Piezo Buzzer
- 🔩 8 × 10kΩ Resistors (used as pull-downs)
- 🧱 Breadboard
- 🔌 Jumper Wires

---

## ⚙️ How It Works

### 🧠 Input Detection
- Each push button is connected to a digital input pin on the Arduino.
- When a button is pressed, it sends a HIGH signal to the pin.

### 🎼 Sound Generation
- The `tone()` function is used to produce sound on the piezo buzzer.
- Each button maps to a specific musical frequency (note).
- Notes are played for **100 milliseconds** on each press.

### 📡 Serial Monitoring
- The Serial Monitor displays which note is being played.
- Useful for debugging or confirming button responses.

### 🛑 Debounce Handling
- A short `delay(100)` prevents multiple triggers from a single press.

---

## 🎵 Note-to-Frequency Mapping

| Note | Frequency (Hz) |
|------|----------------|
| C4   | 262            |
| D4   | 294            |
| E4   | 330            |
| F4   | 349            |
| G4   | 392            |
| A4   | 440            |
| B4   | 494            |
| C5   | 523            |

Each button on the piano is linked to one of these notes.

---

## 🔄 Program Logic Overview

1. Continuously loop through all button pins.
2. Use `digitalRead()` to check if any button is pressed.
3. If a press is detected:
   - Identify the corresponding note.
   - Call `tone(piezoPin, frequency, 100)` to play it.
   - Log the note to the Serial Monitor.
   - Apply a short delay to debounce.
4. Repeat.

---

## 🔍 Core Functions Used

```cpp
digitalRead(pin);          // Reads the state of a button
tone(buzzerPin, freq, ms); // Plays the sound at given frequency and duration
delay(100);                // Prevents button bounce
```

---

## 🛠️ Optional Features & Upgrades

- 🖥️ **Display Notes**: Attach an LCD/OLED screen to show the current note.
- 🔁 **Melody Recorder**: Add memory to record and replay sequences.
- 🧼 **Software Debouncing**: Replace `delay()` with better debounce logic.
- 🎹 **Touch Interface**: Use capacitive sensors instead of buttons for a modern feel.
- 🎶 **Octave Switching**: Add more buttons or switches to change octaves.

---

## 🚀 Ideal For

- 🎓 Learning about digital inputs
- 🔊 Understanding frequency and sound generation
- 🎶 Exploring basic musical logic
- 🛠️ Practicing hardware interaction and Serial debugging

---

## 🏷️ Tags
`#Arduino` `#DIYMusic` `#ToneGenerator` `#PianoProject` `#ArduinoProjects` `#Electronics` `#EmbeddedSystems` `#IoT` `#ButtonInputs`

---

## 📸 Optional: Circuit Diagram

_Add a circuit diagram image here if available._

---

## 📜 License

This project is free and open-source for educational and personal use. Share and remix with credit.


