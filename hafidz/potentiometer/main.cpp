#include <Servo.h>

// C++ code
//

Servo myservo;
void setup()
{
 myservo.attach(13);
}

void loop()
{
  int point = analogRead(A0);
  
  int value = map(point, 0, 1023, 0, 180);
  
  myservo.write(value);
}