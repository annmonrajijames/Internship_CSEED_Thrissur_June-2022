void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int soil = analogRead(A0);
  Serial.println(soil);
  
}
