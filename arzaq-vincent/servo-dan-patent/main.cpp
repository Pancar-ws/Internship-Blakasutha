#include <Servo.h>

#define PIN_IN(p) pinMode((p), INPUT)
#define PIN_OUT(p) pinMode((p), OUTPUT)

#define IN
#define OUT

Servo daservo;

IN int pin3 = 3;
IN int pin2 = 2;

OUT int pin12 = 12;
OUT int pin13 = 13;
OUT int pin11 = 11;

int btnstate1 = 0;
int btnstate2 = 0;

int pos_center = 90, pos_left = 0, pos_right = 180;

unsigned long prevMilis = 0;
const long interval = 1000;

IN int val;

void setup()
{
  daservo.attach(pin11);
  PIN_OUT(pin13);
  PIN_OUT(pin11);
  PIN_OUT(pin12);
  
  PIN_IN(pin2);
  PIN_IN(pin3);
  
  daservo.write(pos_center);
}

void btncontroler() {
  btnstate1 = digitalRead(pin3);
  btnstate2 = digitalRead(pin2);
  
  if(btnstate1 == HIGH) {
    daservo.write(pos_left);
    digitalWrite(pin13, HIGH);
  } else if(btnstate2 == HIGH) {
    daservo.write(pos_right);
    digitalWrite(pin12, HIGH);
  } else {
  	daservo.write(pos_center);
    digitalWrite(pin13, LOW);
    digitalWrite(pin12, LOW);
  }
}

void potent() {
  val = analogRead(A0);
  int sudut = map(val, 0, 1023, 0, 180);
  daservo.write(sudut);
}

void loop()
{
  btncontroller();
  potent();
  /*
  unsigned long currentMillis = millis();
  
  if(currentMillis - prevMilis >= interval) {
    prevMilis = currentMillis;
    // digitalWrite(pin10, HIGH);
  }
  */
  
 
  // digitalWrite(pin12, HIGH);
  delay(500);
}
