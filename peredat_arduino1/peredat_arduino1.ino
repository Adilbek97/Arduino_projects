#include<SoftwareSerial.h>
SoftwareSerial sstt(11,10);
int val=3,lastval=5;
char result;

void setup() {
  
  Serial.begin(9600);
  sstt.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
    if(Serial.available()>0){
    int val=Serial.read()-'0';
  if(val==1 && val!=lastval){
    digitalWrite(7,HIGH);
    result='0';
    lastval=val;
    sstt.write(result); 
    Serial.println(result);
    }
   else if(val==0 && val!=lastval)
   {
    digitalWrite(7,LOW);
    result='1';
    lastval=val;
    sstt.write(result);
    Serial.println(result);
   }
   
  }
}
