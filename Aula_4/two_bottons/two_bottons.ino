/*
 * Estudo de portas logicas 2
 */

int led1 = 13;
int bot1 = 2;
int bot2 = 3;

static bool ledState = false; // LED is off by default

 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
}

void loop() {
 /* if(digitalRead(bot1) == HIGH && digitalRead(bot2) == HIGH){
    digitalWrite(led1, HIGH);    
  }else{
    digitalWrite(led1, LOW);    
  }
  */
  if(digitalRead(bot1) == HIGH || digitalRead(bot2) == HIGH){
    digitalWrite(led1, HIGH);    
  }else{
    digitalWrite(led1, LOW);    
  }
  

}
