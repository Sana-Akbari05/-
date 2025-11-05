int sensor;
int led = 11;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  sensor = analogRead(A0);
  Serial.print("sensor Values=");
  Serial.println(sensor);
  delay(30);
  int NewLed = map(sensor, 400, 800, 255, 0);
  analogWrite(led, NewLed);
  if (sensor > 800) {
    analogWrite(led, LOW);
  }
}
