
#include <time.h>
#include <WiFi.h>

#define LED 2

int intVariable = 0;
char charVariable = 'G';
bool booleanVariable = false;
String stringVariable = "Strings looks like this.";

// Single line comment looks like this.

/*
  Multiple lines 
  comments look
  like this.
*/

void setup() {
  Serial.begin(9600);
  Serial.println("Hello world!");
  digitalWrite(LED, HIGH);
  uint8_t i = 1 + 1 - 1 * 1 / 1;
  if (i == 1) {
    digitalWrite(LED, LOW);
    return;
  }
}

void loop() {}
