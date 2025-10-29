#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};
byte skull[8] = {
  0b00000,
  0b01110,
  0b10101,
  0b11011,
  0b01110,
  0b01110,
  0b00000,
  0b00000
};
byte x[8] = {
  0b00000,
  0b10001,
  0b01010,
  0b00100,
  0b01010,
  0b10001,
  0b00000,
  0b00000
};
byte smalHeart[8] = {
  0b00000,
  0b01010,
  0b10101,
  0b10001,
  0b01010,
  0b00100,
  0b00000,
  0b00000
};
void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, heart);
  lcd.createChar(1, skull);
  lcd.createChar(2, x);
  lcd.createChar(3, smalHeart);
  lcd.clear();
  lcd.print("custom character");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.write(byte(0));

  lcd.setCursor(2, 1);
  lcd.write(byte(1));

  lcd.setCursor(4, 1);
  lcd.write(byte(2));

  lcd.setCursor(6, 1);
  lcd.write(byte(3));
}
