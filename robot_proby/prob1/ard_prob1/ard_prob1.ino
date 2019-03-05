#include<SoftwareSerial.h>
SoftwareSerial sstt(11,10);

void setup() {
  sstt.begin(9600);
   pinMode(5,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(sstt.available()>0){
    char value=sstt.read();
    if(value=='1')
    digitalWrite(5,HIGH);
    else if(value=='0')
    digitalWrite(5,LOW);
    }
  // put your main code here, to run repeatedly:

}
