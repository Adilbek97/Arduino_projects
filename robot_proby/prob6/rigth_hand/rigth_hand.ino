#include<Servo.h>
Servo plecho;
void setup() {
 // plecho.attach(2);
  Serial1.begin(9600);
}

void salamdashuu(){
 plecho.write(140);
 delay(5000);
 plecho.write(90);
}

char val;
void loop() {

if(Serial1.available()){
  val=Serial1.read();
// int data =Serial.read() - '0';

  Serial1.println(val);
  if(val=='1'){
    salamdashuu();
    }  


}

//salamdashuu();

