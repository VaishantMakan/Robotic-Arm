#include<AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup()
{
  Serial.begin(9600);

  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);

  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop()
{
  motor4.run(FORWARD); //going from position B to position A
  delay(850);
  motor4.run(RELEASE);
  
  motor2.run(FORWARD); //lifting the arms up to pick the object
  motor3.run(FORWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  motor1.run(BACKWARD); //considering that the clamp is opened already
  delay(2000);
  motor1.run(RELEASE);

  motor4.run(BACKWARD); //going from position A to position B
  delay(850);
  motor4.run(RELEASE);

  motor1.run(FORWARD); //opening the clamp and dropping object at position B
  delay(2000);
  motor1.run(RELEASE);

  motor2.run(BACKWARD); //lifting the arms up to make space for object
  motor3.run(BACKWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  motor4.run(BACKWARD); //going from position B to position C 
  delay(850);
  motor4.run(RELEASE);

  motor2.run(FORWARD);//going ahead to pick the obj 
  motor3.run(FORWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  motor1.run(BACKWARD); //picking 2nd object
  delay(2000);
  motor1.run(RELEASE);

  motor2.run(BACKWARD); //lifting the arms up 
  motor3.run(BACKWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  motor4.run(FORWARD);//going from position C to position B 
  delay(850);
  motor4.run(RELEASE);

  motor2.run(FORWARD);
  motor3.run(FORWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  motor1.run(FORWARD); //dropping other object
  delay(2000);
  motor1.run(RELEASE);

  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  delay(3500);
  motor2.run(RELEASE);
  motor3.run(RELEASE);

  exit(0);
  
}
