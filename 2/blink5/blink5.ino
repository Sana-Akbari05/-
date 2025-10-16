int led1=9;
int led2=8;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  for (int i=0; i<5; i++ ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);
  }
  for (int i=0; i<5; i++ ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(2000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(2000);
  }
  for (int i=0; i<5; i++ ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(4000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(4000);
  }
}
