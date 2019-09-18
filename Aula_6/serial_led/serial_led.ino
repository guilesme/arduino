/*
 * Projeto acender luz pela serial do prof
 */

int LED1 = 13;
int LED2 = 12;
char LEITOR;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    LEITOR = Serial.read();
    Serial.println(LEITOR);
    
    if(LEITOR == 'a' ){
      digitalWrite(LED1, HIGH);
      //digitalWrite(LED2, LOW);
    }if(LEITOR == 's'){
      digitalWrite(LED1, LOW);
      //digitalWrite(LED2, HIGH);
    }if(LEITOR == 'q'){
      digitalWrite(LED2, HIGH);
    }if(LEITOR == 'w'){
      digitalWrite(LED2, LOW);
    }//else{
      //delay(10000);
      //digitalWrite(LED2, LOW);
      //digitalWrite(LED1, LOW);
    //}
  }
  //digitalWrite(LED1, HIGH);
  //digitalWrite(LED2, HIGH);
  //delay(1000);
  //digitalWrite(LED1, LOW);
  //digitalWrite(LED2, LOW);
  //delay(1000);
}
