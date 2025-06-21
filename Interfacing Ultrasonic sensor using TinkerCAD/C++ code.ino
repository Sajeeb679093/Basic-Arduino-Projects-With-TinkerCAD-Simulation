// Define pins
const int trigPin = 10;
const int echoPin = 9;

void setup() {
  Serial.begin(9600);             // Start serial communication
  pinMode(trigPin, OUTPUT);       // Set trig pin as output
  pinMode(echoPin, INPUT);        // Set echo pin as input
}

void loop() {
  long duration;
  float distanceCm;

  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo time with a 30ms timeout
  duration = pulseIn(echoPin, HIGH, 30000); // 30,000 microseconds = 30 milliseconds

  // If no echo received (timeout), duration will be 0
  if (duration == 0) {
    Serial.println("No object detected or out of range.");
  } else {
    // Calculate distance in cm
    distanceCm = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.print(distanceCm);
    Serial.println(" cm");
  }

  delay(500); // Wait before next measurement
}
