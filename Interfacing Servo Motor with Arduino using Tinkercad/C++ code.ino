#include <Servo.h>

Servo Myservo;
int pos;

void setup() {
  Myservo.attach(7); // Attaches the servo on pin 7 to the servo object
}

void loop() {
  // Loop to move the servo from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos++) {
    Myservo.write(pos); // Set servo position
    delay(15);          // Wait 15ms for the servo to reach the position
  }
  
  delay(3000); // Wait 3 seconds at 180 degrees
  
  // Loop to move the servo from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos--) {
    Myservo.write(pos); // Set servo position
    delay(15);          // Wait 15ms for the servo to reach the position
  }
  
  delay(1000); // Wait 1 second at 0 degrees
}