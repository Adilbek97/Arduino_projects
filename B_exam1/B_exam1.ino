void setup() {
pinMode(8,OUTPUT);
digitalWrite(10,HIGH);
}
void loop() {
  bool button = !digitalRead(10);
  if(button){
  digitalWrite(8,HIGH);}
  else {
    digitalWrite(8,LOW);}
}
