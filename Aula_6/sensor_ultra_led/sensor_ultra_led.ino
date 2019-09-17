/*
 * sensor ultrasonico com led
 * 
 */

#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13);
int led1 = 2;
float distance;

void setup() {
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance = ultrasonic.read();
  
  Serial.print("Distância in CM: ");
  Serial.println(distance);
  //Serial.print("Distância in M: ");
  //Serial.println(distance/100.0);
  if (distance > 20) {
  digitalWrite(led1, LOW);
}else{
  digitalWrite(led1, HIGH);
}
  delay(1000);
}
