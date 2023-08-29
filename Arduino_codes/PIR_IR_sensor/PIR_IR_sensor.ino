void setup() {
  pinMode (12, INPUT);
  pinMode (13, INPUT);
  pinMode (0, OUTPUT);
  pinMode (1, OUTPUT);
}

void loop() {
  if (digitalRead (12) == HIGH)
  {
  digitalWrite (1, HIGH);
  }
  else
  {
  digitalWrite (1, LOW);
  }

    if (digitalRead (13) == HIGH)
  {
  digitalWrite (0, HIGH);
  }
  else
  {
  digitalWrite (0, LOW);
  }
  delay(500);
}
