// C++ code
//
int led1 = 3;
int led2 = 4;
int led3 = 5;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
 digitalWrite(3,HIGH); delay(1000);
 digitalWrite(3,LOW); delay(1000);
 digitalWrite(4,HIGH); delay(1000);
 digitalWrite(4,LOW); delay(1000);
 digitalWrite(5,HIGH); delay(1000);
 digitalWrite(5,LOW); delay(1000);
}