// C++ code
//

// init LED = pin_number;
// int cathode_LED = 3;

void setup()
{
  // init pin
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  for (int i = 0; i <= 3; i++) {
  
   // switch on off after one second
  digitalWrite(i, HIGH);
  
  delay(200);
  
  digitalWrite(i, LOW);
  
  delay(200);
    
  }
  
}