#include<Servo.h>
Servo koltuk,pl;
void setup() {
koltuk.attach(4);
pl.attach(2);
}

void loop() {
  koltuk.write(60);
  pl.attach(90);
  //delay(1000);
  


}
