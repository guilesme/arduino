/*
 * Estudo de portas logicas
 */

int led1 = 13;
int bot1 = 2;
int bot2 = 3;

static bool ledState = false; // LED is off by default

 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT_PULLUP);
}

void loop() {
  /*
  if(digitalRead(bot1) == HIGH){
    digitalWrite(led1, HIGH);    
  }
  if(digitalRead(bot2) == HIGH){
    digitalWrite(led1, LOW);    
  }
  */
  if((digitalRead(bot1) == HIGH) && !ledState)
  {
    digitalWrite(led1, LOW);
    ledState = true;
    Serial.print(ledState);
  }
  if ((digitalRead(bot1) == HIGH) && ledState)
  {
    digitalWrite(led1, HIGH);
    ledState = false;
    Serial.print(ledState);
    
  }

}
