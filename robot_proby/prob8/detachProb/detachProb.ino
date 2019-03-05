#include<Servo.h>
Servo plecho1;
void setup() {
  plecho1.attach(2);
 
}
void plecho(){
plecho1.write(70);
 delay(3000);
plecho1.write(130);
 delay(3000);
 plecho1.write(70);
 delay(1000);
  }
void loop() {
  
  plecho();
  
  plecho1.detach();
  

}
