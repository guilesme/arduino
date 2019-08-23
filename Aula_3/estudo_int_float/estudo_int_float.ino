/**
 * Estudo do laço for
 * @author - Guilherme
 */

void setup() {
  Serial.begin(9600); //9600 bps
  for(int i=1; i<10; i++){
    Serial.println(i);
  }
  Serial.println("-----");
  for(int i=10; i>=0; i--){
    Serial.println(i);
  }
  Serial.println("-----");
  int valor=7;
  for(int i=1; i<=10; i++){
    Serial.println(valor);
 }
  Serial.println("-----");
  int var1=200;
  for(int i=1; i<=10; i++){
    var1=var1+1;
    Serial.println(var1);
  }
  Serial.println("-----");
  Serial.println("-----");
  for(int i=0; i<=10; i++){
    Serial.print(valor);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(valor * i);
  }
}

void loop() {
  

}
