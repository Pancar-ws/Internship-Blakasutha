Servo myservo;


void setup()
{
  myservo.attach(servopin);
  Serial.begin(9600);
}

void loop()
{
  // baca nilai analog 
  int nilai_poten = analogRead(potenpin);
  // ubah nilai analog 0 - 1023 ke 0 - 180
  int sudut = map(nilai_poten, 0, 1023, 0, 180);
  // masukkan nilai yang udah di mapping 
  myservo.write(sudut);
  Serial.println(sudut);
  
