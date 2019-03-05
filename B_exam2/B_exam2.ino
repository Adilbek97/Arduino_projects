int dat(int t,int e){
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
  Serial.begin(9600);

}

void loop() {
  Serial.println(dat(7,8));
  delay(2000);
}
