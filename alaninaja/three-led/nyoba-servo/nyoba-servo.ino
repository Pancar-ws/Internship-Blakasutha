#include <Servo.h>

// init Servo object
Servo myservo;

// declar servo position
int pos = 0;

void setup()
{
  // pin digital signal servo
  myservo.attach(9);
}

void loop()
{
  // memutar servo dari 0 hingga 180 deg
  for (pos = 180; pos >= 0; pos--) {
  	myservo.write(pos);
    delay(15);
  }
  
  // memutar servo dari 0 hingga 180 deg
  for (pos = 0; pos <= 180; pos++) {
    myservo.write(pos);
    delay(15);
  } 
}