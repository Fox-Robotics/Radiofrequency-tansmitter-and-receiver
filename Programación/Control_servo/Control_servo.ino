#include <Servo.h>
Servo servomotor;

void setup() {
  servomotor.attach(3);
}

void loop() {
  servomotor.write(0);
  delay(1000);
  servomotor.write(90);
  delay(1000);
  servomotor.write(180);
  delay(1000);
  
}
