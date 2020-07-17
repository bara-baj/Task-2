#include <Servo.h>
Servo servo1;
Servo servo2;
const int button1       = 2;
const int button2       = 3;
void setup() {
  // put your setup code here, to run once:
  servo1.attach(5);
  servo2.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(button1)==true && digitalRead(button2)==false) {
    servo1.write(180);
    servo2.write(90);
      }
 if (digitalRead(button2)==true && digitalRead(button1)==false) {
    servo1.write(90);
    servo2.write(180);
      } 
  if (digitalRead(button1)==false && digitalRead(button2)==false) {
    servo1.write(0);
    servo2.write(0);
      } 
    if (digitalRead(button1)==true && digitalRead(button2)==true) {
    servo1.write(180);
    servo2.write(180);
      }
}
