#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};
byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};
void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, armsUp);
  lcd.createChar(1, armsDown);
  lcd.clear();
}

void loop() {
  for (int a = 0; a <= 16; a++) {

    if (a % 2 == 0) {
      lcd.setCursor(a, 0);
      lcd.write(byte(0));
      delay(700);
      lcd.clear();
    } else {
      lcd.setCursor(a, 1);
      lcd.write(byte(1));
      delay(700);
      lcd.clear();
    }
  }
  for (int b = 16; b >= 0; b--) {
    if (b % 2 == 0) {
      lcd.setCursor(b, 1);
      lcd.write(byte(1));
      delay(700);
      lcd.clear();
    } else {
      lcd.setCursor(b, 0);
      lcd.write(byte(0));
      delay(700);
      lcd.clear();
    }
  }
}
