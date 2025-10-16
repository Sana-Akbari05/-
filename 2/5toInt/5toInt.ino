const int ledPin =8;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    String incomingByte = Serial.readStringUntil('\n');
    int value = incomingByte.toInt();
    if (incomingByte =="RED"){
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } else if (value == 50){
      digitalWrite(ledPin, LOW);
      Serial.println("LED");
    }
  }
}
