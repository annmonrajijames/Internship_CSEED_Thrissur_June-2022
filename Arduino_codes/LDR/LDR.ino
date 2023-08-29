void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int ldr = analogRead(A1);
  Serial.println(ldr); 
}
