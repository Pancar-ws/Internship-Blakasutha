// C++ code
//

int cathode_LED1 = 3;
int cathode_LED2 = 5;
int cathode_LED3 = 4;

void setup()
{
  
  //inisialisasi
  
  pinMode(cathode_LED1, OUTPUT);
  pinMode(cathode_LED2, OUTPUT);
  pinMode(cathode_LED3, OUTPUT);


}

void loop()
{
  //HIGH = NYALA, LOW = MATI
  digitalWrite(cathode_LED1, HIGH);
  delay(1000);
  digitalWrite(cathode_LED2, HIGH);
  delay(1000);
  digitalWrite(cathode_LED3, HIGH);
  delay(1000);
  
  digitalWrite(cathode_LED1, LOW);
  delay(1000);
  digitalWrite(cathode_LED2, LOW);
  delay(1000);
  digitalWrite(cathode_LED3, LOW);
  delay(1000);
  
}








