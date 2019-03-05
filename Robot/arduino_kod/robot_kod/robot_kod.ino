#include<Servo.h>
Servo barmak[5],kist,plecho,nizPlecho,koltuk,chykanak,ooz;
Servo MoyunOngoSolgo,MoyunOydoYldyi,KozOngoSolgo,KozOydoYldyi;
Servo SolBarmak[5],SolKist,SolChykanak,SolPlecho,SolNizPlecho;
char val;
bool random1=true;
int gradus=0,grad2;
int suylo=0;
void connectOnBarmak(){
    int j=6;
  for(int i=0;i<5;i++,j++){
    barmak[i].attach(j);
    }
  }
  
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
void ooz_kuimul()
{ 
    ooz.write(150);
    delay(200);
 ooz.write(100);
 delay(300);
    }
void ooz_och(){
   ooz.write(100);
  }
  //--------------------------------------
void BolshoiPales(){
  connectOnBarmak();
  koltuk.attach(11);
  plecho.attach(2);
  plecho.write(100);
  delay(2000);
  koltuk.write(70);
  delay(2000);
  for(int i=0;i<5;i++){
    barmak[i].write(20);
    }
  delay(1000);
  barmak[0].write(10);
  for(int i=1;i<5;i++){
    barmak[i].write(80);
    }
  delay(2000);
  for(int i=0;i<5;i++){
    barmak[i].write(20);
    }
  delay(1000);
  koltuk.write(60);
  delay(2000);
  plecho.write(80);
  delay(2000);
  koltuk.detach();
  plecho.detach();
  for(int i=0;i<5;i++){
    barmak[i].detach();
    }
  }

void Privetstviye(){
  
  koltuk.attach(4);
  chykanak.attach(11);

   koltuk.write(70);
   delay(2000);
   for(int i=0;i<5;i++){
   chykanak.write(80);
   delay(1000);
   chykanak.write(60);
   delay(1000);}

   koltuk.detach();
  chykanak.detach();
  }

 // -----------------------------
void setup() {
  Serial.begin(9600);
  ooz.attach(14);
  // put your setup code here, to run once:

}
void loop() {
if(Serial.available()){
  val = Serial.read();
  if(val!=' ' && val!='s' && val!='o' ){
    gradus=gradus*10+ChangeCharToNumber(val);
    }
     else if(val==' '){
    grad2=map(gradus,0,530,70,120);
    gradus=0;
    MoyunOngoSolgo.write(grad2);  
    }
   else if(val=='s'){
     suylo=1;
    }
   else if(val=='o'){
    ooz.write(100);
    suylo=0;
    }
    else if(val=='p'){
      if(random1){
        BolshoiPales();
        random1=!random1;
        }
       else {
        Privetstviye();
        random1=!random1;
        }
      
      }
  
   }
  if(suylo==1){
    ooz_kuimul();
    }
  else if(suylo==0){
    ooz.write(100);
    }
// BolshoiPales();
//ooz_kuimul();
Privetstviye();
 
}
