/**
 * teste de 5 leds com efeito
 */
void setup() {
  for(int i=13; i>8; i--){
  pinMode(i, OUTPUT);
  }
}

void loop() {
  int efeito = 70;
  for (int i=13; i>=9; i--){
    digitalWrite(i, HIGH);
    delay(efeito);
    digitalWrite(i, LOW);
  }
  for (int i=10; i<=12; i++){
    digitalWrite(i, HIGH);
    delay(efeito);
    digitalWrite(i, LOW);
  }
}
