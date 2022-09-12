/* Statement of Authorship COMP-10184-01: I Gustavo Jose Marcano, 000812644 certify
that this material is my original work. No other person's work has been used without 
due acknowledgement. I have not made my work available to anyone else. */
#include <Arduino.h>

void setup() {
  
  // start the USB serial monitor port 
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nGustavo: 000812644\n");

  // ESP.getChipId() returns the ESP8266 chip ID as a 32-bit integer.
  Serial.printf("ESP8266 Chip ID: %d\n", ESP.getChipId());

  // ESP.getFlashChipId() returns the flash chip ID as a 32-bit integer.
  Serial.printf("Flash ID: %d\n", ESP.getFlashChipId());
}

void loop() {
  unsigned long myTime;

  myTime = millis();
  Serial.println(myTime); // prints time since program started
  delay(2000);          // wait two seconds
}