#include<Servo.h>
Servo MoyunOngoSolgo,MoyunOydoYldyi,SolBarmak[5],SolKist,ooz;
void connectSolBarmak(){
  SolBarmak[0].attach(18);
  SolBarmak[1].attach(20);
  SolBarmak[2].attach(22);
  SolBarmak[3].attach(23);
  SolBarmak[4].attach(24);
  
  }
void setup() {
  // put your setup code here, to run once:
connectSolBarmak();
ooz.attach(14);
//SolKist.attach(19);
//MoyunOydoYldyi.attach(12);
}
void MoyunOngoSolgoProb(){
  for(int grad=70;grad<125;grad+=5){
      MoyunOngoSolgo.write(grad);
      delay(100);
    }
    for(int grad=125;grad>=70;grad-=5){
      MoyunOngoSolgo.write(grad);
      delay(100);
    }
  }
  void MoyunOydoYldyiProb(){
  MoyunOydoYldyi.write(70);
  delay(1000);
  MoyunOydoYldyi.write(110);
  delay(1000);
  }
  void probSolKistPales(){
  SolKist.write(10);
  delay(1000);
  for(int i=0;i<5;i++){
    SolBarmak[i].write(10);
    }
  }
void loop() {
//probSolKistPales();
//ooz.write(30);
//delay(1000);
ooz.write(100);
delay(1000);
}
