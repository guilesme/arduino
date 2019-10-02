/*
 * IOT Leitura de sensor utilizando Bluetooth, APP Android
 * @author Guilherme
 * 
 */
#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(12, 13);
float distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = ultrasonic.read();
  
  Serial.println(distancia);
  Serial.print("");
  delay(500);
}
