#include<Servo.h>
Servo kol;
void setup() {
  // put your setup code here, to run once:
kol.attach(2);
}

void loop() {
  kol.write(70);
  // put your main code here, to run repeatedly:

}
