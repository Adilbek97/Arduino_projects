
char serialData;
int led=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
  if(Serial.available()>0){
    serialData=Serial.read();
    Serial.print(serialData);

    if(serialData=='1'){
      digitalWrite(led,HIGH);
      delay(1000);}
    else if(serialData =='0'){
      digitalWrite(led,LOW);
      delay(1000);}
    }
}
