
#include <Servo.h>

Servo myservo1;
Servo myservo2;

char t;
int enA = 3;   
int enB = 5; 

void setup() {

myservo1.attach(6);
myservo2.attach(7);

pinMode(enA, OUTPUT); 
pinMode(enB, OUTPUT); 
pinMode(9,OUTPUT);   //left motors forward
pinMode(10,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(12,OUTPUT);   //right motors reverse
 
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'R'){            //move forward(all motors rotate in forward direction)
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}
 
else if(t == 'L'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
}
 
else if(t == 'F'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}
 
else if(t == 'B'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

else if(t == '0')
{
  analogWrite(enA, 100);
  analogWrite(enB, 100);
}

else if(t == '1')
{
  analogWrite(enA, 140);
  analogWrite(enB, 140);
}

else if(t == '2')
{
  analogWrite(enA, 153);
  analogWrite(enB, 153);
}

else if(t == '3')
{
  analogWrite(enA, 165);
  analogWrite(enB, 165);
}

else if(t == '4')
{
  analogWrite(enA, 178);
  analogWrite(enB, 178);
}

else if(t == '5')
{
  analogWrite(enA, 191);
  analogWrite(enB, 191);
}

else if(t == '6')
{
  analogWrite(enA, 204);
  analogWrite(enB, 204);
}

else if(t == '7')
{
  analogWrite(enA, 216);
  analogWrite(enB, 216);
}

else if(t == '8')
{
  analogWrite(enA, 229);
  analogWrite(enB, 229);
}

else if(t == '9')
{
  analogWrite(enA, 242);
  analogWrite(enB, 242);
}

else if(t == 'q')
{
  analogWrite(enA, 255);
  analogWrite(enB, 255);
}

else if(t == 'W')
{
  myservo1.write(0);
}

else if(t == 'w')
{
  myservo1.write(90);
}


else if(t == 'U')
{
  myservo1.write(-10);
}

else if(t == 'u')
{
  myservo1.write(0);
}





}
