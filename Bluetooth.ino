void setup() {
  Serial.begin(9600); // USB Serial Monitor
  Serial1.begin(9600); // Bluetooth via Serial1
  pinMode(13, OUTPUT); // LED on pin 13
  Serial.println("Bluetooth ready on Serial1");
}

void loop() {
  if (Serial1.available()) {
    char command = Serial1.read();
    Serial.print("Received: ");
    Serial.println(command);

 if (command == '1') {
  digitalWrite(13, HIGH);
  Serial.println("LED ON");
  } else if (command == '0') {
    digitalWrite(13, LOW);
    Serial.println("LED OFF");
   }
 }
}