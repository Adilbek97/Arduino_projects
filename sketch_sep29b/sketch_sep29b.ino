#include<Servo.h>

Servo barmak[5],kist,plecho,nizPlecho,koltuk,chykanak,ooz;
Servo MoyunOngoSolgo,MoyunOydoYldyi,KozOngoSolgo,KozOydoYldyi;
Servo SolBarmak[5],SolKist,SolChykanak,SolPlecho,SolNizPlecho,SolKoltuk;



void setup() {
      plecho.attach(2);
      kist.attach(5);
      MoyunOngoSolgo.attach(13);
      MoyunOngoSolgo.write(90);
      koltuk.attach(4);
             }

void loop() {

        plecho.write(130);
        kist.write(10);
        koltuk.write(60);
        delay(3000);
        kist.write(170);
        plecho.write(100);
        koltuk.write(80);
        delay(3000);
    /*
  kist.write(10);
  delay(1000);
  for(int i=0;i<5;i++){
    barmak[i].write(10);
    }
   delay(1000);
    kist.write(170);
  delay(1000);
  for(int i=0;i<5;i++){
    barmak[i].write(80);
    }
   delay(1000);
  
       */             
             }
