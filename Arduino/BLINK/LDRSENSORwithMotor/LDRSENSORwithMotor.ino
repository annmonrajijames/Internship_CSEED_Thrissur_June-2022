void setup() 
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  int ldr = analogRead(A1);
  Serial.println(ldr); 
  digitalWrite(11, HIGH); 
  if (ldr>132)
  {  
   digitalWrite(12, LOW); 
   digitalWrite(13, HIGH); 
  }
  else
  {
   digitalWrite(12, HIGH); 
   digitalWrite(13, HIGH);   
  }
}
