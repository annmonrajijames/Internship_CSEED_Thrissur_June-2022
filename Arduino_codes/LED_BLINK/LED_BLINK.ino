void setup() 
{
  // put your setup code here, to run once:
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
}

void loop() 
{
digitalWrite (12, HIGH);
delay(1000);
digitalWrite (12, LOW);
digitalWrite (13, HIGH);
delay(1000);
digitalWrite (13, LOW);
}
