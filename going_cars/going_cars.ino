
#include<Servo.h>
Servo onu,ona,solu,sola;
char serialData;
int led=12;

int s=0;
void birinchi(){
 ona.write(90);
 sola.write(80);
 onu.write(100);
 solu.write(80);
  
  s++;
  }
 

void robot_h(){
    if(s==0)
   birinchi();
delay(300);
 ona.write(120);
 Serial.println("bastu");
 sola.write(85);
 delay(300);
  onu.write(120);
 solu.write(120);
 delay(300);
  ona.write(90);
 sola.write(55);
 delay(300);
 onu.write(60);
 solu.write(60);
 delay(300);
  }

void robot_stop(){
  birinchi();
  s=0;
  }

void setup() {
  // put your setup code here, to run once:
  ona.attach(10);
  onu.attach(11);
  sola.attach(5);
  solu.attach(6);
   pinMode(led,OUTPUT);
  Serial.begin(9600);
}


void loop() {
    if(Serial.available()>0){
    serialData=Serial.read();
    Serial.print(serialData);
    if(serialData=='0'){
      digitalWrite(led,LOW);
      delay(1000);
      }
    else if(serialData =='1'){
      digitalWrite(led,HIGH);
    }}
    
    else if(serialData =='2'){
      robot_h();
      delay(5);
      }
    else if(serialData =='3'){
      robot_stop();
      delay(1000);
      }
    
      
     
    }

 /*sola.write(90);
 delay(1000);
 sola.write(120);
 delay(1000);
 sola.write(60);
 delay(1000);*/
 


