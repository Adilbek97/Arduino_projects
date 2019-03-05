#include<Servo.h>
Servo plecho1,plecho2,plecho3,plecho4,ooz;
void setup() {
 plecho1.attach(2);
 plecho2.attach(3);
 plecho3.attach(4);
 plecho4.attach(11);
 ooz.attach(12);
}
void chykanak(){
 plecho4.write(70);
 delay(2000);
 plecho4.write(150);
 delay(2000);
 
  }
  void ooz_och(){
  ooz.write(40);
  }
void koltuk(){
plecho3.write(50);
delay(2000);
plecho3.write(90);
delay(2000);    
 }
void plecho(){
 plecho1.write(70);
 delay(2000);
 plecho1.write(150);
 delay(2000);
  }
void kolun_kyishaituu(){
   plecho1.write(70);
 delay(2000);
 plecho1.write(150);
 delay(2000);
 plecho2.write(70);
 delay(2000);
 plecho2.write(100);
 delay(2000);
 plecho2.write(70);
 delay(2000);
  
  }
void loop() {
ooz_och();
}
