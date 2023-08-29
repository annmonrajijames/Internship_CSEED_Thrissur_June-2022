 void setup() {
pinMode(1, INPUT);
pinMode(7, OUTPUT);
}
void loop() {
  if(digitalRead(1)==HIGH)
{
  digitalWrite(7, HIGH);
}
else
{
  digitalWrite(7, LOW);
}
delay(1000);
}
