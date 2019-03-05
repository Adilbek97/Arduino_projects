#include<Servo.h>
Servo ooz;
int value;
char val;
void setup() {
  ooz.attach(13);
 Serial1.begin(9600);
 Serial.begin(9600);
}
void ooz_kuimul()
{ 
    ooz.write(150);
    delay(250);
    ooz.write(50);   
    delay(250);
    }
void ooz_och(){
  ooz.write(50);
  }
int s=0,k=0;
void loop() {
  Serial.println(1);
  if(Serial1.available()){
    value=Serial1.read();
    if(value==1){
      Serial.println(5);
       s=1;
      }else if(value==1){
        s=0;
        }
    }
   if(Serial.available()){
    val=Serial.read();
     if(val=='1'){
        k=1;
      }
      else if(val=='0'){
        k=0;
        }
    }
   if(s==1 && k==1){
    
    ooz_kuimul();
    }
   else if(s==0 && k==0){
    ooz_och();
    }
    delay(2000);
   // ooz_och();
}
