#include <Arduino.h>

__attribute__((unused)) void setup() {
// write your initialization code here
    Serial.begin(9600);
}

__attribute__((unused)) void loop() {
// write your code here

    delay(1000);
    Serial.printf("Teste\n");
}