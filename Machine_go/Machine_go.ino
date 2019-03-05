
void go(){
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 }
void _stop(){
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 }
 void right(){
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 }
 void left(){
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 }
 
 
  

void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  go();
  delay(1000);
  _stop();
  delay(1000);
  // put your main code here, to run repeatedly:

}
