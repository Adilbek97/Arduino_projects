

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
  digitalWrite(1,LOW);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  
  // put your main code here, to run repeatedly:
Serial.print("message");
Serial.print(i(7,8));
Serial.println();
}
