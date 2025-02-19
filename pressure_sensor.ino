// as of 2/18 - needs calibration, not currently working
#include "HX711.h"

#define DT 3  // Connect to DT pin on HX711
#define SCK 2 // Connect to SCK pin on HX711

HX711 scale;

void setup() {
    Serial.begin(9600);
    scale.begin(DT, SCK);
}

void loop() {
    Serial.println(scale.get_units(), 2); // Display weight
    delay(500);
}
