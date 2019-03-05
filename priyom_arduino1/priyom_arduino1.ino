#include<SoftwareSerial.h>
SoftwareSerial sstt(11,10);
char pr;
int led=8;
void setup() {
  sstt.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  if(sstt.available()>0){
    pr=sstt.read();
    if(pr=='1'){
    digitalWrite(led,HIGH);
    delay(1000);}
    else if(pr=='0'){
    digitalWrite(led,LOW);
    delay(1000);}
    
    }
  // put your main code here, to run repeatedly:

}
