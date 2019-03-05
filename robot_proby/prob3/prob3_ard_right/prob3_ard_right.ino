#include<Servo.h>
Servo ooz;
void setup() {
 ooz.attach(8);
 
}
void ooz_kuimul()
{ 
    ooz.write(180);
    delay(200);
    ooz.write(60);
    delay(200);
    }
void loop() {
  ooz_kuimul();
}

