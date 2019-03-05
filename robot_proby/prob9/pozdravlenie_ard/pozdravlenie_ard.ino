#include<Servo.h>
char val;
Servo plecho1,plecho2,plecho3,plecho4,plecho5,ooz,barmak[5], kist;//barmak[5];
int k,kk;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
 //plecho1.attach(2);
 //plecho2.attach(3);
 //plecho3.attach(4);
 //plecho4.attach(11);
 connect_barmak();
  
 
// plecho3.write(60);
 ooz.attach(12);
 kist.attach(6);
 ooz.write(10);
 connects(true,true,false,true); 
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
  void connect_plecho4(){
       plecho4.attach(11);
      }
  void disconnect_plecho4(){
       plecho4.detach();
      }
  void connect_barmak(){
    for(int i=1;i<5;i++){
        barmak[i].attach(i+6); 
        }
      barmak[0].attach(5);
   }
 void disconnect_barmak(){
  for(int i=0;i<5;i++){
    barmak[i].detach();
    }
  }
  
//-----------------------

//-------proby
void ooz_kuimul()
{ 
    ooz.write(160);
    delay(200);
    ooz.write(40);   
    delay(200);
    }
void ooz_och(){
  ooz.write(40);
  }
void chykanak(){
 plecho4.write(70);
 delay(5000);
 //plecho4.write(150);
 //delay(5000);
  }

  
void koltuk(){
plecho3.write(50);
delay(2000);
plecho3.write(90);
delay(2000);    
 }
void plecho(int i){
 if(i==0){
     connects(true,false,false,false);
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
void connects(bool pl1,bool pl2,bool pl3,bool pl4){
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
    if(pl4==true){
     if(!servo_is_connected(plecho4)){
             connect_plecho4();
      }
    }
  }
  
void disconnects(bool pl1,bool pl2,bool pl3,bool pl4){
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
   if(pl4==true){
     if(servo_is_connected(plecho4)){
      disconnect_plecho4();
     }
    }
  } 

void loop() {
  if(Serial.available()){
     val=Serial.read();
     if(val=='1'){
      k=1;
      kk=k;
      }else if(val=='0'){
        k=0;
        kk=k;
        }else if(val=='3'){
          k=3;
          }
    }
    if(k==1){
      
      }
//chykanak();
  
     plecho4.write(110);
     plecho1.write(120);
     kist.write(160); 
     //Serial.println(1);   
     delay(2000);
     plecho2.write(30);
     delay(2000);
     barmak[0].write(90);
     barmak[1].write(90);
     disconnects(true,true,true,true);
     //Serial.println(5);
     Serial1.write(1);
     delay(10000);
     Serial1.write(0);
     connects(true,true,false,true);
      
     if(k==1){
       Serial1.write(1);
      }
     else if(k==0){
      Serial1.write(0);
      }
     else if(k==3){
      }
     
//Serial.println(plecho1.read());
     plecho1.write(90);
     plecho4.write(70);
     plecho2.write(90);
     kist.write(10);
     for(int i=0;i<5;i++){
      barmak[i].write(0);
      }
      //---------------------------------------
      delay(3000);
     disconnects(true,true,true,true);
      delay(5000);
      connects(true,true,false,true);
       
     

}
