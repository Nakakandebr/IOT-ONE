

#include<Servo.h>
Servo myservo1;
Servo myservo2;
int value1;
int value2;
int red = 6;
int green = 5;

void setup()
{
  myservo1.attach(9);
  myservo2.attach(10);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  value1 = analogRead(A0);
  value1 = map(value1,0,512,0,180);
  myservo1.write(value1);
   
  value2 = analogRead(A1);
  value2 = map(value2,513,1023,180,0);
  myservo2.write(value2);
  
  digitalWrite(green,HIGH);
  delay(value1);
  digitalWrite(green,LOW);
  delay(value2);
  
  digitalWrite(red,HIGH);
  delay(value2);
  digitalWrite(red,LOW);
  delay(value1);
}
  