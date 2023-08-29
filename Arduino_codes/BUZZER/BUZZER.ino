void setup() 
{
  pinMode(8, OUTPUT);
  pinMode(12, INPUT);
}
void loop() 
{
  if (digitalRead(12)==LOW)
  {
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, LOW);
  }
}
