🔴🔵🟢 Controlling LEDs Using IR Remote and Arduino UNO
📌 Project Overview
This project demonstrates how to control multiple LEDs (blue, orange, green) using an IR remote and an Arduino UNO on Tinkercad Circuits. Each button press on the IR remote toggles the LEDs on or off based on the code received.

🧰 Components Used
Component	Quantity
Arduino UNO	1
IR Receiver Module	1
IR Remote	1
LEDs (Blue, Orange, Green)	3
Resistors (220Ω or 330Ω)	3
Breadboard	1
Jumper Wires	Several

🧠 How It Works
The IR remote sends signals as unique codes for each button press.

The IR receiver (connected to pin 12) captures these signals.

Arduino decodes the IR signal and matches it to specific cases using a switch statement.

Depending on the button pressed, it turns ON/OFF specific LEDs.

📟 Button to LED Mapping
Remote Button	IR Code (decimal)	Action
1	-284115200	Turn ON Blue LED
2	-300826880	Turn OFF Blue LED
3	-317538560	Turn ON Orange LED
4	-350961920	Turn OFF Orange LED
5	-367673600	Turn ON Green LED
6	-384385280	Turn OFF Green LED

🛠 Circuit Connections
Arduino Pin	Connected To
12	IR Receiver OUT pin
2	Blue LED (via resistor)
3	Orange LED (via resistor)
4	Green LED (via resistor)
GND	Common GND
5V	IR Receiver VCC

Each LED's cathode (short leg) goes to GND through a resistor.

💻 Arduino Code
The project uses the IRremote library. Make sure to:

Add #include <IRremote.h> at the top.

Use IrReceiver.begin(pin) in setup() to initialize the receiver.

Use IrReceiver.decode() and IrReceiver.decodedIRData.decodedRawData to read the IR code.

Use IrReceiver.resume() to get ready for the next input.

🔧 How to Run in TinkerCAD
Go to Tinkercad Circuits.

Create a new circuit and assemble the components as described above.

Upload or paste the code into the Arduino.

Start simulation.

Use the IR remote interface to send button presses (1–6).

Observe LEDs turning ON/OFF as per the button codes.

📝 Notes
The IR code values may vary based on the remote you use. Run the circuit and check Serial Monitor to get the actual codes from your remote.

Adjust the case values in switch(decCode) according to your specific IR remote codes if needed.

Use Serial.begin(9600) and Serial.println() for debugging.

📷 Demo Screenshot
(Optional: Add a screenshot of your Tinkercad circuit simulation)

👨‍💻 Author
Sajeeb Sarkar
Student, KUET
Project Date: June 2025

Would you like me to generate a downloadable .md file or save this to Tinkercad Notes format?










