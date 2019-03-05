#include<Servo.h>
Servo barmak[5],kist,plecho,nizPlecho,koltuk,chykanak,ooz;
Servo MoyunOngoSolgo,MoyunOydoYldyi,KozOngoSolgo,KozOydoYldyi;
Servo SolBarmak[5],SolKist,SolChykanak,SolPlecho,SolNizPlecho,SolKoltuk;
char val;
int gradus=0,grad2;
void connectOnBarmak(){
    int j=6;
  for(int i=0;i<5;i++,j++){
    barmak[i].attach(j);
    }
  }
void connectSolBarmak(){
  SolBarmak[0].attach(18);
  SolBarmak[1].attach(20);
  SolBarmak[2].attach(22);
  SolBarmak[3].attach(23);
  SolBarmak[4].attach(24);
  
  }


  //-------------------------------------------
  
  int ChangeCharToNumber(char val2){
  if(val=='0') return 0;
  if(val=='1') return 1;
  if(val=='2') return 2;
  if(val=='3') return 3;
  if(val=='4') return 4;
  if(val=='5') return 5;
  if(val=='6') return 6;
  if(val=='7') return 7;
  if(val=='8') return 8;
  if(val=='9') return 9;
  }

  void AdamgaKarapKyimyldoo(){
 if(Serial.available()){
    val=Serial.read();
    if(val!=' '){
    gradus=gradus*10+ChangeCharToNumber(val);
    }
     else{
    grad2=map(gradus,0,530,70,120);
     gradus=0;  
    }
  MoyunOngoSolgo.write(grad2);
   }
    }
   void salam(){
    plecho.attach(2);
    plecho.write(90);
    delay(1000);
    plecho.write(130);
    delay(6000);
    plecho.write(90);
    delay(1000);
    plecho.detach();
    }
  //-------------------------------------------
  
void setup() {
  Serial.begin(9600);
//  SolPlecho.attach(25);
//  SolNizPlecho.attach(26);
//  kist.attach(5);
//SolChykanak.attach(17);
//KozOngoSolgo.attach(15);
//MoyunOydoYldyi.attach(12);
//    plecho.attach(2);
chykanak.attach(11);
//connectSolBarmak();
//ooz.attach(14);
//SolKist.attach(19);
//SolKoltuk.attach(30);
//connectSolBarmak();
//MoyunOngoSolgo.attach(13);
//  nizPlecho.attach(3);
//  koltuk.attach(4);
}
void probPlecho(){
  plecho.write(80);
   delay(3000);
   plecho.write(100);
   delay(6000);
  }
void ooz_kuimul()
{ 
    ooz.write(100);
    delay(200);
    ooz.write(40);   
    delay(200);
    }
void probNizPlecho(){
   nizPlecho.write(90);
   delay(3000);
   nizPlecho.write(130);
   delay(3000); 
  }
  
void probOnKistPales(){
  //  kist.write(10);
//  delay(1000);
//  for(int i=0;i<5;i++){
//    barmak[i].write(10);
//    }
//   delay(1000);
//    kist.write(170);
//  delay(1000);
//  for(int i=0;i<5;i++){
//    barmak[i].write(80);
//    }
//   delay(1000);
  }
  void probSolKistPales(){
  SolKist.write(10);
  delay(1000);
  for(int i=0;i<5;i++){
    SolBarmak[i].write(10);
    }
   delay(1000);
   SolKist.write(170);
  delay(1000);
  for(int i=0;i<5;i++){
    SolBarmak[i].write(90);
    }
   delay(1000);
  }
void probKoltuk(){
  koltuk.write(50);
  delay(3000);
  koltuk.write(80);
  delay(3000);
 }
void probChykanak(){
chykanak.write(50);
delay(2000);  
chykanak.write(100);
delay(2000); 
}
void MoyunOngoSolgoProb(){
  for(int grad=70;grad<125;grad+=5){
      MoyunOngoSolgo.write(grad);
      delay(100);
    }
    for(int grad=120;grad>=70;grad-=5){
      MoyunOngoSolgo.write(grad);
      delay(100);
    }
  }
void MoyunOydoYldyiProb(){
  MoyunOydoYldyi.write(50);
  delay(1000);
  MoyunOydoYldyi.write(110);
  delay(1000);
  }
void KozOngoSolgoProb(){
  KozOngoSolgo.write(130);
delay(1000);
KozOngoSolgo.write(80);
delay(1000);
  }
void SolChykanakProb(){
  SolChykanak.write(50);
delay(2000);
SolChykanak.write(100);
delay(2000);
  }
void SolNizPlechoProb(){
  SolNizPlecho.write(90);
delay(2000);
SolNizPlecho.write(130);
delay(2000);
  }
void SolPlechoProb(){
SolPlecho.write(90);
delay(2000);
SolPlecho.write(130);
delay(2000);
  }
void SolKoltukProb(){
  SolKoltuk.write(50);
  delay(2000);
  SolKoltuk.write(80);
  delay(2000);
  }
void loop() {
//  SolNizPlecho.write(90);
//probSolKistPales();
//KozOngoSolgo.write(100);
//SolPlecho.write(90);
//MoyunOngoSolgo.write(70);
//AdamgaKarapKyimyldoo();
//  delay(1000);
//  MoyunOngoSolgo.write(80);
//  delay(1000);
//plecho.write(110);
// connectSolBarmak();
//delay(2000);
//probSolKistPales();
//// delay(2000);
//koltuk.attach(4);
//  chykanak.attach(11);
//
   koltuk.write(60);
   delay(2000);
   for(int i=0;i<5;i++){
   chykanak.write(80);
   delay(1000);
   chykanak.write(60);
   delay(1000);}

   koltuk.detach();
  chykanak.detach();
}
