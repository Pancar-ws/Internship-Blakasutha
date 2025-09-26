#define sel_fr PA2 // digital pin 
#define pwm PB8 // analog pin 


void clock_wise(){
  digitalWrite(sel_fr, HIGH);
  analogWrite(pwm, 1000);
}

void counter_clock_wise(){
  digitalWrite(sel_fr, LOW);
  analogWrite(pwm, 1000);
}

void setup() {
  pinMode(sel_fr, OUTPUT);
  pinMode(pwm, OUTPUT);

  analogWriteResolution(12);          // 12-bit → 0–4095
  analogWriteFrequency( 20000);  // 20 kHz
  // analogWriteFrequency(lpwm, 20000);
}

void loop() {
  // Jalan searah jarum jam full speed (4095 = 100%)
  // analogWrite(rpwm, 255);
  // analogWrite(lpwm, 0);

  // analogWrite(rpwm, 4095);
  // analogWrite(lpwm, 0);

  // clock wise 
  clock_wise();

  delay(3000);
  //counter clock wise 
  counter_clock_wise();
  delay(3000);

}
