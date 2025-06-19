 #include <LiquidCrystal.h>

// Initialize the LCD with the specified pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(20, 4);  // Initialize the LCD with 20 columns and 4 rows
  lcd.setCursor(0, 0);
  lcd.print("Anvic Systems");
  lcd.setCursor(0, 1);
  lcd.print("Prasad Apts.");
  lcd.setCursor(0, 2);
  lcd.print("Thank you!");
}

void loop() {
  // Nothing to do here
}
