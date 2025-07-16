#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','4','7','.'},
  {'2','5','8','0'},
  {'3','6','9','F'},
  {'P','N','C','S'}
};

byte pin_rows[ROWS] = {29, 31, 33, 35};
byte pin_column[COLS] = {37, 39, 41, 43};

Keypad customKeypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = customKeypad.getKey();
  if (key) {
    if (key == 'P') {
      Serial.println("Previous");
    } else if (key == 'N') {
      Serial.println("Next");
    } else if (key == 'C') {
      Serial.println("Clear");
    } else if (key == 'S') {
      Serial.println("Save");
    } else {
      Serial.println(key);
    }
  }
}
