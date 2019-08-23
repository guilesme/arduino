/**
 * teste de 5 leds
 */
void setup() {
  //define o pino 13 como saida
  for(int i=13; i>8; i--){
  pinMode(i, OUTPUT);
  }
}

void loop() {
  //mandar 5v no pino 13
  for(int i=13; i>8; i--){ 
  digitalWrite(i, HIGH);
  }
}
