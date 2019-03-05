#define PULLUP HIGH
char lastResult;
void setup() {
  Serial.begin(9600);
  digitalWrite(12, PULLUP); // turn on pullup resistor
}

void loop() {
  // read all inputs
  bool button = !digitalRead(12);
  // make some logic
    char result;
  if(button){
    result = '1';
  } else {
    result = '0';
  }
  // set outputs
  if(lastResult != result){
    Serial.print(result);
    lastResult = result;
  }
    
}
