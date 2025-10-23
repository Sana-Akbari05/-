int potpin = A0;
int potValue = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potpin);
  float voltage = potValue *(5.0/1023.0);
  Serial.println(voltage);
}
