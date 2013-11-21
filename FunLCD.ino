/*
 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16,4);
}

void loop() {

  if(digitalRead(7)==LOW)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hey, you!");
    delay(2000);
  
    lcd.setCursor(0, 1);
    lcd.print("Why u looking at me?");
    delay(5000);

    lcd.setCursor(0, 2);
    lcd.print("Still looking?");
    delay(2000);
  
    lcd.setCursor(0, 3);
    lcd.print("........fine, u nerd");
    delay(2000);
  
    lcd.clear();    
  }
  else
  {
    lcd.setCursor(0, 1);
    lcd.print("Push the button plz");
  }
}

