#include<Servo.h>
char val;
Servo ooz,moyun, pl1;
void setup() {
  Serial.begin(9600);
 ooz.attach(8);
 moyun.attach(9);
 pl1.attach(2);
}

void moyun_kuimul(){
  
  moyun.write(60);
  delay(1000);
  moyun.write(130);
  delay(1000);
  }
 /* void obnemi(){
    
    
    
    }*/
    
    
    
   
void ooz_kuimul()
{ 
    ooz.write(180);
    delay(200);
    ooz.write(60);
    delay(200);
    }
void ooz_och(){
  ooz.write(60);
  }
  int s=10,ss=7;
void loop() {
     if(Serial.available()>0){
    val=Serial.read();
     if(val=='1'){
      s=1;
      
      } 
     else if(val=='0'){
       s=0;
       
      }
     else if(val=='2'){
      moyun_kuimul();
      }
    }
    if(s!=ss){
      if(s==1)
      ooz_kuimul();
      else if(s==0)
      ooz_och();
      ss=s;
      }
     //moyun_kuimul();
   // ooz_kuimul();
    //ooz_och();
    


}
