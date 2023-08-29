void setup() 
{
  // put your setup code here, to run once:
  pinMode (12, INPUT);
  pinMode (3, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (digitalRead (12) == HIGH)
  {
  digitalWrite (3, HIGH);
  }
  else
  {
  digitalWrite (3, LOW);
  }
}
