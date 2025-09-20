// C++ code
//

int ledMerah = 13;
int ledKuning = 12;
int ledHijau = 11;

int state = ledMerah;
void setup() {
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop()
{
  if(state < ledHijau) state = ledMerah;
  digitalWrite(state, HIGH);
  delay(500);
  digitalWrite(state, LOW);
  delay(1000);
  state -= 1;
}
