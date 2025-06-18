#include <SPI.h>
#include <SD.h>

const int chipSelect = 53;
File dataFile;

void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);

  if (!SD.begin(chipSelect)) {
    Serial.println("Initialization failed!");
    return;
  }
  Serial.println("Enter text to save to SD card:");
}

void loop() {
  if (Serial.available()) {
    String userInput = Serial.readStringUntil('\n');
    userInput.trim(); // Remove any leading/trailing whitespace

    if (userInput.length() > 0) {
      dataFile = SD.open("data.txt", FILE_WRITE);
      if (dataFile) {
        dataFile.println(userInput);
        dataFile.close();
        Serial.println("test data saved.");
      } else {
        Serial.println("Error opening file.");
      }
    }
  }
}
