// Declare a variable to store the sensor's value
int sensorValue = 0;

void setup()
{
  // Set pin A0 as an input to read from the LDR
  pinMode(A0, INPUT);
  
  // Initialize serial communication at 9600 baud rate for monitoring
  Serial.begin(9600);
  
  // Set pin 9 as an output to control the LED
  pinMode(9, OUTPUT);
}

void loop()
{
  // Read the analog value from the LDR sensor (connected to A0)
  sensorValue = analogRead(A0);
  
  // Print the raw sensor value to the Serial Monitor
  Serial.println(sensorValue);
  
  // Map the sensor's input range (0-1023) to the LED's output range (0-255)
  // and write this value to the LED pin to control its brightness.
  // The multimeter measures the resulting voltage from this PWM signal.
  analogWrite(9, map(sensorValue, 0, 1023, 0, 255));
  
  // Wait for 100 milliseconds before the next reading
  delay(100);
}