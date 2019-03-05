#include<Servo.h>
Servo ooz,koz,barmak[5];
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  ooz.attach(12);
 // koz.attach(13);
 // koz.write(90);
//for(int i=0;i<5;i++){
//  barmak[i].attach(i+5);
  //}
  //for(int i=0;i<5;i++){
  //barmak[i].write(30);
  //}
}
void ooz_kuimul()
{ 
    ooz.write(160);
    delay(200);
    ooz.write(40);   
    delay(200);
    }
void ooz_och(){
  ooz.write(30);
  }
char val;
int value1,val2;
void loop() {
  
  if(Serial.available()){
    val=Serial.read();
   // Serial.println(val);
    if(val=='1'){
      value1=1;
     Serial1.write('0');
     // ooz_kuimul();
      }
     else if(val=='0'){
      ooz_och();
      Serial1.write('0');
      value1=0;
      }
      else if(val=='3'){
        Serial1.write('1');
        }
    } 
   if(value1==1){
     ooz_kuimul();
    }
   else if(value1==0){
    ooz_och();
    }

}
