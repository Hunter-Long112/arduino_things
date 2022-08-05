#include <Stepper.h>

int stepsPerRevolution = 2048;
Stepper stepMot(stepsPerRevolution, 8, 10, 9, 11);
int motSpeed = 10;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
//Serial.begin(9600);
stepMot.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
stepMot.step(stepsPerRevolution * 3);
delay(dt);
//stepMot.step(- stepsPerRevolution);
//delay(dt);
}
