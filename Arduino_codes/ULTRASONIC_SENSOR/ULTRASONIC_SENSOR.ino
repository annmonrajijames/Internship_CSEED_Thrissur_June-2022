/*ULTRASONIC SENSOR  - ARDUINO  
DISTANCE > 20 - LED BLINK*/
void setup() {
  Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(7, INPUT);
pinMode(13, OUTPUT);
}

void loop() {
 digitalWrite(6,LOW); 
 delayMicroseconds(2);
 digitalWrite(6,HIGH);
 delayMicroseconds(10);
 digitalWrite(6,LOW);
 int duration=pulseIn(7,HIGH);//calculation of distance of obstacle
 int distance=(duration*0.034/2);
 if(distance>20)
 {
  digitalWrite(13, HIGH);
 }
 else
 {
 digitalWrite(13, LOW);
 }
}
