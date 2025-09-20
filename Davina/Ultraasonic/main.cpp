const int trigPin = 12;
const int echoPin = 11;
const int buttonPin = 1;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH){
    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin,HIGH);
  int distance = duration *0.034 / 2;
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
  }
}