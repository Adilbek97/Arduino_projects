#include<Servo.h>
const int in1=9;
const int in2=10;
const int in3=6;
const int in4=5;
Servo servo;
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
void back(){
  digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
  }
void go(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
void right(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(200);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  delay(500);
  }
void stopp(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
  void left(){
    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(200);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  delay(500);
  }
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:

//
//go();
//delay(1000);
//right();
//go();
//delay(500);
//back();
//delay(1000);
//left();
go();
servo.write(10);
int dur=i(7,8);
//Serial.print("cm= ");
//Serial.println(dur);
//Serial.print(" --> ");
//Serial.println(dur+5);
if(dur>2 && dur<40){
  stopp();
  delay(200);
  servo.write(180);
  right();
  }
}


