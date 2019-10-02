/*
 * IOT Leitura de sensor LDR utilizando Bluetooth, APP Android
 * @author Guilherme
 * 
 */

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */

int sensorPin = A0; 
int sensorValue = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  
  Serial.println(sensorValue);
  Serial.print("");
  delay(500);
}
