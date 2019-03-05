const int trigPin=7;
const int echoPin=8;

void setup() {
 Serial.begin(9600);

}

void loop() {
  long duration,inches,cm;
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,LOW);

  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);

  inches=microsecondsToInches(duration);
  cm=microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
  // put your main code here, to run repeatedly:

}

