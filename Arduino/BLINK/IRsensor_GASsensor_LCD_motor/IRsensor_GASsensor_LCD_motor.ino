//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
//lcd.init();
//lcd.backlight();
//lcd.clear();
pinMode (2, INPUT);
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (1, INPUT);
pinMode (11, OUTPUT);
pinMode (10, OUTPUT);
pinMode (9, OUTPUT);
}
void loop() {
//lcd.setCursor(0,0);
  if (digitalRead(2)==HIGH)//IR SENSOR Detected
  {   
   digitalWrite (13, HIGH);//GREEN LED
  // lcd.print("BLOCK DETECTED");
  }
  else
  {
  digitalWrite (12, HIGH);//RED LED
 // lcd.print("BLOCK NOT DETECTED");
  }
if ((digitalRead(1)==LOW) && (digitalRead(2)==HIGH))//motor works when gas sensor detects gas
{
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(500);
}
else
{
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(500);
}
}
