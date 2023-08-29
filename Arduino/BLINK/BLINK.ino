//XMiSpJJu_Nm5j7O75gcix3FzsXqGVgXm
//Password:- helloworld
//Name:- Annmon James

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>

char auth[] = "XMiSpJJu_Nm5j7O75gcix3FzsXqGVgXm";
char ssid[] = "Annmon James";
char pass[] = "helloworld";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
Blynk.notify("Connected");
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.virtualWrite(V0, 50);
}
