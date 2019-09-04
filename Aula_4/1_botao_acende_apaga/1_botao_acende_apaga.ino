/*
 * Estudo de portas logicas
 */

int led1 = 13;
int bot1 = 2;
//int bot2 = 3;

static bool ledState = false; // LED is off by default

 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }

}
