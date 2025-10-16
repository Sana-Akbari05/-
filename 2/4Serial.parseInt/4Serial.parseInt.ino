const int ledPin =8;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    int value = Serial.parseInt();
    if (value ==10){
      digitalWrite(ledPin, HIGH);
    } else if (value == 20){
      digitalWrite(ledPin, LOW);
    }
  }
}
