#include <Servo.h>

Servo myservo;
int tombolKiri = 2;
int tombolKanan = 3;

int posKiri = 180;
int posTengah = 90;
int posKanan = 0;

int PinPotent=A0;
int value;
int sudut;

void setup() {
  myservo.attach(9);
  pinMode(tombolKiri, INPUT_PULLUP);
  pinMode(tombolKanan, INPUT_PULLUP);
  myservo.write(posTengah);
}

void loop() {
  if (digitalRead(tombolKanan) == LOW) {
    myservo.write(posKanan);
  } else if (digitalRead(tombolKiri) == LOW) {
    myservo.write(posKiri);
  } else {
    value=analogRead(PinPotent);
  	sudut = map(value, 0, 1023, 0, 180);
 	myservo.write(sudut);
  }
  delay(15);

}
