#include <Servo.h>
const byte rightSensorPin = PB3;
const byte leftSensorPin = PB2;
const byte backSensorPin = PB4;

Servo rightservo;
Servo leftservo;
byte pos1 = 0;
byte pos2 = 0;
byte rightSensorReading = 0;
byte leftSensorReading = 0;
byte backSensorReading = 0;
void setup()
// put your setup code here, to run once:
{
  rightservo.attach(PB1);
  leftservo.attach(PB0);
  pinMode(leftSensorPin, INPUT);
  pinMode(rightSensorPin, INPUT);
  pinMode(backSensorPin, INPUT);
}
void normalmove()
{
  pos1 = 45;
  pos2 = 135;
  rightservo.write(pos1);
  leftservo.write(pos2);
}
void loop()
{
  leftSensorReading = digitalRead(leftSensorPin);
  rightSensorReading = digitalRead(rightSensorPin);
  backSensorReading = digitalRead(backSensorPin);
  delay(10);
  if (!rightSensorReading && !leftSensorReading) {
    normalmove();
  }
  else if (rightSensorReading && leftSensorReading && !backSensorReading) {
    pos1 = 135;
    pos2 = 45;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();
  }
  else if (rightSensorReading && !leftSensorReading) {
    pos2 = 45;
    pos1 = 45;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();

  }
  else if (!rightSensorReading && leftSensorReading) {
    pos2 = 135;
    pos1 = 135;
    rightservo.write(pos1);
    leftservo.write(pos2);
    delay(500);
    normalmove();
  }
  else if (rightSensorReading && leftSensorReading && backSensorReading)
  {
    pos1 = 45;
    pos2 = 135;
    rightservo.write(pos1);
    leftservo.write(pos2);
    normalmove();
  }
  rightservo.write(pos1);
  leftservo.write(pos2);
}
