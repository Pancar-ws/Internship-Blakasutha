#include <Servo.h>
Servo myservo;
int potPin = A3;
int val;

void setup() {
  myservo.attach(5);
}

void loop() {
  val = analogRead(potPin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);
}
