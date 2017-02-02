#include "HX711.h"
/* A2 = DT, A2 = SCK on HX711 connected to load cell */
HX711 cell(A2, A3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println( cell.read() );
}
