void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
}
