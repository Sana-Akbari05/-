int led = 9;
int new_val;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int val = Serial.parseInt();
    int new_val = map(val, 0, 100, 0, 255);
    analogWrite(led, new_val);
    delay(100);
  }
}
