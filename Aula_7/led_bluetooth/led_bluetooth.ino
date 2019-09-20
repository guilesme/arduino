/*
   Projeto acender luz pelo bluetooth do prof
*/

//int LED1 = 13;
//int LED2 = 12;

#define LED1 13
#define LED2 12

char LEITOR;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    LEITOR = Serial.read();
    Serial.println(LEITOR);
    switch (LEITOR) {
      case 'a':
        digitalWrite(13, HIGH);
        break;
      case 's':
        digitalWrite(13, LOW);
        break;
      case 'q':
        digitalWrite(12, HIGH);
        break;
      case 'w':
        digitalWrite(12, LOW);
        break;
    }
  }

}
