#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','4','7','.'},
  {'2','5','8','0'},
  {'3','6','9','F'},
  {'P','N','C','S'}
};

byte pin_rows[ROWS] = {22, 24, 26, 28};
byte pin_column[COLS] = {23, 25, 27, 29};

Keypad customKeypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = customKeypad.getKey();
  if (key) {
    if (key == 'Prev') {
      Serial.println("Previous");
    } else if (key == 'NXT') {
      Serial.println("Next");
    } else if (key == 'CLR') {
      Serial.println("Clear");
    } else if (key == 'Save') {
      Serial.println("Save");
    } else {
      Serial.println(key);
    }
  }
}
