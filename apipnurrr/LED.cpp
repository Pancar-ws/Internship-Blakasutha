int ledMerah = 13;
int ledKuning = 12;
int ledHijau = 11;

void setup() {
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop() {
    digitalWrite(ledMerah, HIGH);
   	delay(1000);
    digitalWrite(ledMerah, LOW);
  	
  	digitalWrite(ledKuning, HIGH);
  	delay(1000);
    digitalWrite(ledKuning, LOW);
  
  	digitalWrite(ledHijau, HIGH);
  	delay(1000);
    digitalWrite(ledHijau, LOW);
}



ZZ
