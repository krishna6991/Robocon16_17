/*
  LiquidCrystal Library - Hello World

  Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
  library works with all LCD displays that are compatible with the
  Hitachi HD44780 driver. There are many of them out there, and you
  can usually tell them by the 16-pin interface.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  The circuit:
   LCD RS pin to digital pin 12
   LCD Enable pin to digital pin 11
   LCD D4 pin to digital pin 5
   LCD D5 pin to digital pin 4
   LCD D6 pin to digital pin 3
   LCD D7 pin to digital pin 2
   LCD R/W pin to ground
   LCD VSS pin to ground
   LCD VCC pin to 5V
   10K resistor:
   ends to +5V and ground
   wiper to LCD VO pin (pin 3)

  Library originally added 18 Apr 2008
  by David A. Mellis
  library modified 5 Jul 2009
  by Limor Fried (http://www.ladyada.net)
  example added 9 Jul 2009
  by Tom Igoe
  modified 22 Nov 2010
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(9, 8, 4, 5, 6, 7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.clear();
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

}
int flag = 0;
void loop()
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):

  lcd.setCursor(2, 0);
  lcd.print("Milk Vending");
  // print the number of seconds since reset:
  delay(3000);
  lcd.clear();
  lcd.setCursor(1, 0);
  while (flag == 0)
  {
    lcd.print("Select Option");
    lcd.setCursor(0, 1);
    lcd.print("200   300   500 ");


    if (digitalRead(10) == HIGH)
    {
      delay(15);
      while (digitalRead(10) == HIGH);
      delay(15);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Option 200 ");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 1);
      for (int i = 0; i < 201; i++)
      { lcd.setCursor(0, 0);
        lcd.print("Option 200 ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(50);
        lcd.clear();
        lcd.setCursor(0, 1);
      }
      flag = 1;
    }
    if (digitalRead(11) == HIGH)
    {
      delay(15);
      while (digitalRead(11) == HIGH);
      delay(15);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Option 300 ");
      delay(1000);
      lcd.setCursor(0, 1);
      for (int i = 0; i < 301; i++)
      { lcd.setCursor(0, 0);
        lcd.print("Option 300 ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(50);
        lcd.clear();
        lcd.setCursor(0, 1);
      }
      lcd.clear();
      flag = 1;
    }
    if (digitalRead(12) == HIGH)
    {
      delay(15);
      while (digitalRead(12) == HIGH);
      delay(15);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Option 500");
      delay(1000);
      lcd.setCursor(0, 1);
      for (int i = 0; i < 501; i++)
      { lcd.setCursor(0, 0);
        lcd.print("Option 500");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(50);
        lcd.clear();
        lcd.setCursor(0, 1);
      }
      lcd.clear();
      flag = 1;
    }

  }
  flag = 0;
}

