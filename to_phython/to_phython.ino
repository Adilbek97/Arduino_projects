int cnt=0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

 cnt+=1;

 Serial.println(cnt);
delay(500);
}
