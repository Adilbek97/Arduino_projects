#include <Servo.h>

Servo barmak[5],kist,plecho,nizPlecho,koltuk,chykanak,ooz;
Servo MoyunOngoSolgo,MoyunOydoYldyi,KozOngoSolgo,KozOydoYldyi;
Servo SolBarmak[5],SolKist,SolChykanak,SolPlecho,SolNizPlecho,SolKoltuk;
char val;
int gradus = 0;
int grad;

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

void setup() {
  Serial.begin(9600);
//    connectOnBarmak();
//    connectSolBarmak();
//
//    plecho.attach(2);
//    nizPlecho.attach(3);
//    koltuk.attach(4);
//    chykanak.attach(11);
//    kist.attach(5);
//
//    SolPlecho.attach(25);
//    SolNizPlecho.attach(26);
//    SolKoltuk.attach(30);
//    SolChykanak.attach(17);
//    SolKist.attach(19);
//
//    MoyunOydoYldyi.attach(12);
//    MoyunOngoSolgo.attach(13);
//    
//    ooz.attach(14);
//    
//    KozOngoSolgo.attach(15);   
}

void loop() {
//  if (Serial.available() > 0){
//    val = Serial.read()
//    if (val == ''){
//      saying();
//    }
//    if (val == ''){
//      eyesleftright();
//    }
//    if (val == ''){
//      birnerseberuu();
//    }
//    if (val == ''){
//      priglashenie();
//    }
//    if (val == ''){
//      AdamgaKarapKyimyldoo();
//    }
//  }


//  AdamgaKarapKyimyldoo();
//    salam();
//    saying();
//    priglashenie();
//    eyeslefttright();
//    birnerseberuu();
}

int changeChar(char val2){
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
    val = Serial.read();
    if(val != ' '){
      gradus = gradus * 10 + changeChar(val);
    } else {
      grad = map(gradus, 0, 530, 70, 120);
      gradus = 0;
    }
    MoyunOngoSolgo.write(grad);
  }
}

void salam(){
  chykanak.write(50);
  delay(6000);
  chykanak.write(100);
  delay(6000);
  kist.write(70);
  delay(2000);
  for(int i=0;i<5;i++){
    barmak[i].write(30);
    }
   delay(1000);
   kist.write(170);
   delay(2000);
   for(int i=0;i<5;i++){
    barmak[i].write(80);
    }
   delay(2000);
    for(int i=0;i<5;i++){
    barmak[i].write(30);
    }
    delay(2000);
}

void saying(){
  ooz.write(250);
  delay(300);
  ooz.write(250);
  delay(300);
}

void eyeslefttright(){
  KozOngoSolgo.write(110);
  delay(1000);
  KozOngoSolgo.write(90);
  delay(1000);
  }

void birnerseberuu(){
  for(int i=0;i<5;i++){
    SolBarmak[i].write(10);
    }
  delay(1000);
  for(int i=0;i<5;i++){
    SolBarmak[i].write(90);
    }
   delay(1000);
}

void priglashenie(){
  chykanak.write(50);
  delay(3000);
  chykanak.write(100);
  delay(2000);
  nizPlecho.write(90);
  delay(2000);
  nizPlecho.write(130);
  delay(2000);
  kist.write(30);
  delay(1000);
  for(int i=0;i<5;i++){
  barmak[i].write(30);
  }
  delay(2000);
  for(int i=0;i<5;i++){
  barmak[i].write(80);
  }
  delay(2000);
  kist.write(170);
  delay(3000);
}



