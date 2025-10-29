int trig = 11;
int echo = 12;
int duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(0.002);
  digitalWrite(trig, HIGH);
  delay(0.01);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2)*0.0343;
  Serial.println(distance);
  delay(500);
  }
