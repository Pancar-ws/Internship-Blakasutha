// C++ code
//

const int LEDPin = 2;
const int btnIn = 1;

void setup()
{
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600); 
  pinMode(btnIn, INPUT_PULLUP);
}

void loop()
{
  int btnState = digitalRead(btnIn);
  
  if (btnState == HIGH) {
    digitalWrite(LEDPin, HIGH);
    delay(1000);
  } 
}