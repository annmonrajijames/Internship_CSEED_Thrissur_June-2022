void setup() 
{
 pinMode(D0, INPUT);
 pinMode(D3, INPUT);
 pinMode(D6, OUTPUT);
 pinMode(D8, OUTPUT);
}

void loop() {
  if(digitalRead(D0)==HIGH)
  {
    digitalWrite(D6, HIGH);
  }
  else
  {
   digitalWrite(D6, LOW);
  }
  if(digitalRead(D3)==HIGH)
  {
    digitalWrite(D8, HIGH);
  }
  else
  {
   digitalWrite(D8, LOW);
  }
}
