#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Start the simulation!");
}

void loop() {
  Serial.println("Hello World!");
  delay(2000);
}