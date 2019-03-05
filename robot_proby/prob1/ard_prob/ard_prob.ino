#include<SoftwareSerial.h>
SoftwareSerial sstt(11,10);
void setup() {
  
   Serial.begin(9600);
   sstt.begin(9600);  
}

void loop() {
 if(Serial.available()>0){
 char val=Serial.read();
  if(val=='1')
    sstt.write('1');
  else if(val=='0')
   sstt.write('0');
  }
}
