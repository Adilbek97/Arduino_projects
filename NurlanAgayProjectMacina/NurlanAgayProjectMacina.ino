
const int in1=9;
const int in2=10;
const int in3=6;
const int in4=5;
void go(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
void back(){
  digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
  }

void right(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(200);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  delay(500);
  }
void stopp(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
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
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
go();
//delay(1000);
//stopp();
//delay(100);
//right();
int dur=i(7,8);
Serial.print("cm= ");
Serial.println(dur);
if(dur>2 && dur<20){
  stopp();
  delay(100);
  back();
  delay(200);
  right();
  stopp();
  delay(100);
  }
}
