const int j=3;
const int k=5;
const int s=4;
char val;


void setup() {
 pinMode(j,OUTPUT);
 pinMode(k,OUTPUT);
 pinMode(s,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    val=Serial.read();
    if(val=='1'){
      digitalWrite(k,HIGH);
      digitalWrite(j,LOW);
      digitalWrite(s,LOW);
      }
      else if(val=='2'){
      digitalWrite(k,LOW);
      digitalWrite(j,HIGH);
      digitalWrite(s,LOW);
      }
      else if(val=='3'){
      digitalWrite(k,LOW);
      digitalWrite(j,LOW);
      digitalWrite(s,HIGH);
      }
    }

}
