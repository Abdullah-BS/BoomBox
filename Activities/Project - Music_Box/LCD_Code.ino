#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd1(0x27, 16, 2); // LCD1

void setup() {
  lcd1.init();          // initialize the lcd
  lcd1.backlight();
  lcd1.clear();
  
  lcd1.setCursor(4, 0);  // column 4, row 0
  lcd1.print("BoomBox");
  
  lcd1.setCursor(6, 1);  // column 6, row 1
  lcd1.print("Workshop");
  
  delay(5000);
  lcd1.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd1.setCursor(4, 0);  // column 4, row 0
  lcd1.print("Abdullah's Project!");
}
