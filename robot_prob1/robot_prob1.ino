const int j=3;
char val;
void setup() {
  pinMode(j,OUTPUT);
  Serial.begin(9600);
}

void loop() {
   if(Serial.available()>0){
    val=Serial.read();
    if(val=='1'){
      digitalWrite(j,HIGH);
      }
      else if(val=='2'){
      digitalWrite(j,LOW);
      }
   }


}
