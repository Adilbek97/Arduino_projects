char incomingByte = 0;
void setup() {
    pinMode(11, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  if (Serial.available() > 0) {  //если есть доступные данные
        // считываем байт
        incomingByte = Serial.read();
      if('1' == incomingByte){
        digitalWrite(11, HIGH);
      } else if('0' == incomingByte){
        digitalWrite(11, LOW);
      }
        // отсылаем то, что получили
        Serial.print("I received: ");
        Serial.println(incomingByte);
    }
}
