void setup() {
pinMode(1, OUTPUT);
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
  int i=500;
  digitalWrite(1, HIGH);
  delay(i);
  digitalWrite(3, HIGH);
  delay(i);
  digitalWrite(5, HIGH);
  delay(i);
  digitalWrite(7, HIGH);
  delay(i);
  digitalWrite(7, LOW);
  delay(i);
  digitalWrite(5, LOW);
  delay(i);
  digitalWrite(3, LOW);
  delay(i);
  digitalWrite(1, LOW);
  delay(i);
}
