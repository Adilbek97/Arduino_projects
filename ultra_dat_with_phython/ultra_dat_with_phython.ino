
const int j=3;
const int k=5;
const int s=4;
char val;
int i(int t,int e){
  int duration;
  pinMode(t,OUTPUT);
    pinMode(e,INPUT);
    digitalWrite(t,LOW); 
  delayMicroseconds(2);
  digitalWrite(t,HIGH);
  delayMicroseconds(20);
  digitalWrite(t,LOW);
  duration=pulseIn(e,HIGH);
  duration=duration/59;
  return duration;
}
void kyzyl(){
      digitalWrite(k,HIGH);
      digitalWrite(j,LOW);
      digitalWrite(s,LOW);
  }
void jashyl(){
      digitalWrite(k,LOW);
      digitalWrite(j,HIGH);
      digitalWrite(s,LOW);
   }
void sary(){
      digitalWrite(k,LOW);
      digitalWrite(j,LOW);
      digitalWrite(s,HIGH);
  }
void setup() {
 pinMode(j,OUTPUT);
 pinMode(k,OUTPUT);
 pinMode(s,OUTPUT);
  digitalWrite(1,LOW);
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("message:");
   Serial.println(i(7,8));
   if(Serial.available()>0){
   val=Serial.read();
   if(val=='1') kyzyl();
   else if (val=='2') sary();
   else if (val=='3') jashyl();
   }
delay(2000);
}
