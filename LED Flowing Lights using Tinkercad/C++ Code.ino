/*
  LED Flowing Lights
  - Turns on 8 LEDs connected to digital pins 1 through 8 sequentially.
  - After all are lit, it turns them off sequentially.
  - This cycle repeats continuously.
*/

void setup() {
  // Use a for loop to declare pins 1 through 8 as OUTPUTs.
  // This is more efficient than writing pinMode() 8 times.
  for (int ledPin = 1; ledPin <= 8; ledPin++) {
    pinMode(ledPin, OUTPUT);
  }
}

void loop() {
  // --- First Loop: Turn LEDs ON sequentially ---
  // This loop iterates from pin 1 to 8.
  for (int ledPin = 1; ledPin <= 8; ledPin++) {
    // Turn the current LED on
    digitalWrite(ledPin, HIGH);
    // Wait for 300 milliseconds before turning on the next LED
    delay(300);
  }

  // --- Second Loop: Turn LEDs OFF sequentially ---
  // This loop also iterates from pin 1 to 8.
  for (int ledPin = 1; ledPin <= 8; ledPin++) {
    // Turn the current LED off
    digitalWrite(ledPin, LOW);
    // Wait for 300 milliseconds before turning off the next LED
    delay(300);
  }
}