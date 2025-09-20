#define PIN_IN(p) pinMode(p, INPUT)
#define PIN_OUT(p) pinMode(p, OUTPUT)

const int pin13 = 13;

void setup() {
  // declare pin
  PIN_OUT(pin13);
}

void loop() {
  
  // turn on pin 13
  digitalWrite(pin13, HIGH);
  delay(2000);

  // turn of pin 13
  digitalWrite(pin13, LOW);
  delay(2000);
}
