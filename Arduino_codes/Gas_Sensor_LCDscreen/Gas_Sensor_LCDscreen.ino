#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
lcd.init();
lcd.backlight();
pinMode(D0, INPUT);
pinMode(D8, INPUT);
pinMode(D7, OUTPUT);
}

void loop() {
     lcd.clear();
     lcd.setCursor(0,0);
     if (digitalRead(D0)==HIGH)
     {
      digitalWrite(D7, HIGH);
      lcd.print("1GasSensor sensed");
     }
     else
     {
       digitalWrite(D7, HIGH);
       lcd.print("NoDetection");
     }
     
       if (digitalRead(D8)==HIGH)
     {
       digitalWrite(D7, HIGH);
      lcd.print("2GasSensor sensed");
     }
     else
     {
       digitalWrite(D7, HIGH);
       lcd.print("NoDetection");
     }
}
