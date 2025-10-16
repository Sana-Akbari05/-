const int ledPin =8;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    char incomingByte = Serial.read();
    if (incomingByte =='H'){
      digitalWrite(ledPin, HIGH);
    } else if (incomingByte == 'L'){
      digitalWrite(ledPin, LOW);
    }
  }
}
