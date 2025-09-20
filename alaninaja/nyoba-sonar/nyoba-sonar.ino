// C++ code
//

// declar digital pin
const int triggerPin = 10; // output
const int echoPin = 11; // input
int LEDPin = 7;

void setup()
{
  // deklarasi input dan output sensor
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // memulai serial monitor
  Serial.begin(9600);
  
  // pembacaan LED
  pinMode(LEDPin, OUTPUT);
}

void loop()
{
  // mematikan trigger pin untuk menghilangkan noice
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  // memulai input output
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
 
  // pembacaan 
  long duration = pulseIn(echoPin, HIGH); 
  
  // pengkalkulasian jarak
  // 0.034 diambil dari kecepatan suara
  // satuan cm
  int distance = duration * 0.034 / 2; 
  
  if (distance <= 100) {
    Serial.println("dekat");
  	digitalWrite(LEDPin, HIGH);
  } else if (distance > 100) {
    Serial.println("jauh");
  	digitalWrite(LEDPin, LOW);
  }
  
  delay(100);
}