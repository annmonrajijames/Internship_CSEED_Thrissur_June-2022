int trig = 6;
int echo = 7;
void setup() {
 Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(13, OUTPUT);
}

void loop() {
 digitalWrite(trig,LOW); 
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 int duration=pulseIn(echo,HIGH);//calculation of distance of obstacle
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
