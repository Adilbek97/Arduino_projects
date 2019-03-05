#include<RH_ASK.h>
#include<SPI.h>

void setup() {
  Serial.begin(9600);
  if(!driver.init())
  Serial.println("init failed");

}

void loop() {
  const char *msg="hello";
  driver.send((uint8_t *)msg,strlen(msg));
  driver.waitPacketSent();
  delay(1000);
