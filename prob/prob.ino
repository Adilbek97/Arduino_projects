void setup() {
 pinMode(8,OUTPUT);
 Serial.begin(9600);

}
char s;
void loop() {
  if(Serial.available()){
    s=Serial.read();
    if(s=='1')
    digitalWrite(8,HIGH);
    else if(s=='0'){
    digitalWrite(8,LOW);
    }
  }
  // put your main code here, to run repeatedly:

}
