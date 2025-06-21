// Define the analog pin where the TMP36's Vout is connected.
const int tempPin = A0;

void setup() {
  // Initialize serial communication at 9600 bits per second.
  // This allows the Arduino to send data to the computer to be viewed in the Serial Monitor.
  Serial.begin(9600);
  
  // Set the temperature sensor pin as an input. (This is the default for analog pins, but good practice).
  pinMode(tempPin, INPUT);
}

void loop() {
  // 1. Read the raw analog value from the sensor (a value between 0 and 1023).
  int analog_reading = analogRead(tempPin);

  // 2. Convert the analog reading (0-1023) to a voltage (0-5V).
  // We multiply by 5.0 because the Arduino's reference voltage is 5V.
  // We divide by 1024.0 because that is the resolution of the analog-to-digital converter (2^10).
  float voltage = analog_reading * 5.0 / 1024.0;

  // 3. Convert the voltage to temperature in Celsius.
  // The TMP36 datasheet specifies a 10mV/°C scale factor and a 500mV (0.5V) offset.
  // The formula is: Temp(°C) = (Voltage - 0.5) * 100
  float temp_celsius = (voltage - 0.5) * 100;

  // 4. Convert the Celsius temperature to Fahrenheit.
  // The standard formula is: Temp(°F) = (Temp(°C) * 9/5) + 32
  float temp_fahrenheit = (temp_celsius * 9.0 / 5.0) + 32;

  // Print the calculated values to the Serial Monitor.
  Serial.print("Analog Reading: ");
  Serial.println(analog_reading);
  
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  Serial.print("Temperature: ");
  Serial.print(temp_celsius);
  Serial.print(" C / ");
  Serial.print(temp_fahrenheit);
  Serial.println(" F");

  // Add a blank line for readability
  Serial.println();

  // Wait for 3 seconds before taking the next reading.
  delay(3000);
}