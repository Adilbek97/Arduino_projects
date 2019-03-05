void setup() {
pinMode(7,INPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int val=digitalRead(7);
  if(val==HIGH){
    digitalWrite(8,HIGH);
    Serial.println("Motion");
    }
    else{
    digitalWrite(8,LOW);
    Serial.println("NO motion");
      }
  delay(1000);
}
