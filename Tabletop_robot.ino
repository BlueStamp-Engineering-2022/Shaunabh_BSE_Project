#include <Servo.h>
const int rightSensorPin = PB3;
const int leftSensorPin = PB2;

Servo rightservo;
Servo leftservo;
int pos1 = 0;
int pos2 = 0;
int rightSensorReading = 0;
int leftSensorReading = 0;
void setup() 
// put your setup code here, to run once:
{
  rightservo.attach(PB1);
  leftservo.attach(PB0);
  pinMode(13, OUTPUT);
  pinMode(leftSensorPin, INPUT);
  pinMode(rightSensorPin, INPUT);
}
void normalmove()
{
  pos1 = 45;
  pos2 = 135;
  rightservo.write(pos1);
  leftservo.write(pos2); 
}
void loop()
// put your main code here, to run repeatedly:
{
  leftSensorReading = digitalRead(leftSensorPin);
  rightSensorReading = digitalRead(rightSensorPin);
  delay(10);
  if(rightSensorReading == 0 && leftSensorReading == 0) {
    //both sensor on table
    normalmove();
  }
  else if (rightSensorReading == 1 && leftSensorReading == 1) {
    //both sensor off table
    pos1 = 135;
    pos2 = 45;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();
  }
  else if(rightSensorReading == 1 && leftSensorReading == 0){
    //right sensor off table
    pos2 = 45;
    pos1 = 45;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();
    
  }
  else if (rightSensorReading == 0 && leftSensorReading == 1){
    //left sensor off table
    pos2 = 135;
    pos1 = 135;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();
  }
  //digitalWrite(13, HIGH);    
  //digitalWrite(12, HIGH);
  rightservo.write(pos1);
  leftservo.write(pos2);
  //Serial.print(pos2);
  
}
