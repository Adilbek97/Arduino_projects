#include<Servo.h>
Servo plecho1,plecho2,plecho3,plecho4,plecho5,ooz,barmak[5];//barmak[5];
int k=0;
void setup() {
  Serial.begin(9600);
 //plecho1.attach(2);
 //plecho2.attach(3);
 //plecho3.attach(4);
// plecho4.attach(11);
 for(int i=0;i<3;i++){
   barmak[i].attach(i+5); 
  }
  barmak[3].attach(9);
  barmak[4].attach(10);
 
// plecho3.write(60);
// ooz.attach(12);

}
// --------- inintialize---
  void connect_plecho1(){
       plecho1.attach(2);
      }
  void disconnect_plecho1(){
       plecho1.detach();
      }
  void connect_plecho2(){
       plecho2.attach(3);
      }
  void disconnect_plecho2(){
       plecho2.detach();
      }
  void connect_koltuk(){
       plecho3.attach(4);
      }
  void disconnect_koltuk(){
       plecho3.detach();
      }
  
//-----------------------

//-------proby
void chykanak(){
 plecho4.write(70);
 delay(2000);
 plecho4.write(150);
 delay(2000);
  }

  void ooz_och(){
  ooz.write(40);
  }
void koltuk(){
plecho3.write(50);
delay(2000);
plecho3.write(90);
delay(2000);    
 }
void plecho(int i){
 if(i==0){
     connects(true,false,false);
     plecho1.write(70);
     delay(2000);
     plecho1.write(130);
     delay(8000);
     plecho1.write(70);
     delay(2000);
    }
 
  }
void kolun_kyishaituu(){
 plecho1.write(70);
 delay(2000);
 plecho1.write(150);
 delay(2000);
 plecho5.write(70);
 delay(2000);
 plecho5.write(100);
 delay(2000);
 plecho5.write(70);
 delay(2000);
  }
bool servo_is_connected(Servo servo){
  return servo.attached();
  }
void connects(bool pl1,bool pl2,bool pl3){
  if(pl1==true){
     if(!servo_is_connected(plecho1)){
             connect_plecho1();
      }
    }
  if(pl2==true){
    if(!servo_is_connected(plecho2)){
      connect_plecho2();
      }
    }
   if(pl3==true){
    if(!servo_is_connected(plecho3)){
       connect_koltuk();
      } 
    }
  }
  
void disconnects(bool pl1,bool pl2,bool pl3){
  if(pl1==true){
    if(servo_is_connected(plecho1)){
        disconnect_plecho1();
      }
    }
  if(pl2==true){
     if(servo_is_connected(plecho2)){
      disconnect_plecho2();
     }
    }
   if(pl3==true){
    if(servo_is_connected(plecho3)){
      disconnect_koltuk();
      }
    }
  } 

void loop() {
 /* Serial.println(k);
  {
    plecho(k);
    } 
if(plecho1.attached()){
  Serial.println("true");
    disconnects(true,false,false);
   Serial.println(plecho1.attached());
  }
 k=2;*/
connects(true,true,false);
  plecho1.write(70);
   delay(2000);
  plecho1.write(130);
    delay(3000);
  plecho2.write(130);
    delay(2000);
  for(int i=0;i<5;i++){
    barmak[i].write(20);
    }
     delay(3000);
  for(int i=0;i<5;i++){
    barmak[i].write(80);
    }
     delay(3000);  
  plecho2.write(93);
    delay(2000);
  
     
}
