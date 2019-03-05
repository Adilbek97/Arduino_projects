#include<Servo.h>
Servo ooz;
void setup() {
  Serial.begin(9600);
  ooz.attach(13);
   ooz.write(10);
}
int i(int t,int e){
  int duration;
  pinMode(t,OUTPUT);
    pinMode(e,INPUT);
    digitalWrite(t,LOW); 
  delayMicroseconds(2);
  digitalWrite(t,HIGH);
  delayMicroseconds(20);
  digitalWrite(t,LOW);
  duration=pulseIn(e,HIGH);
  duration=duration/59;
  return duration;
}
void ooz_kuimul()
{ 
    ooz.write(150);
 //   delay(250);
    delay(0);
    ooz.write(50);   
 //   delay(250);
    delay(0);
    }
void ooz_och(){
  ooz.write(50);
  }
int s=0,k=0,val;
void loop() {
  double aralyk=i(17,16);
  
   if(Serial.available()){
    val=Serial.read();
     if(val=='1'){
        k=1;
      }
      else if(val=='0'){
        k=0;
        }
    }
   if( k==1){
    
    ooz_kuimul();
    }
   else if( k==0){
    ooz_och();
    }
   
   Serial.println(aralyk);
   delay(300);
}
