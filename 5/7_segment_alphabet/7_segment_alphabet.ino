int sequence[][7] = {
  { 1, 1, 1, 0, 1, 1, 1 },//A
  { 1, 0, 0, 1, 1, 1, 0 },//c
  { 1, 0, 0, 1, 1, 1, 1 },//E
  { 1, 0, 0, 0, 1, 1, 1 },//F
  { 0, 1, 1, 0, 1, 1, 1 },//H
  { 0, 0, 0, 1, 1, 1, 0 },//L
  { 1, 1, 0, 0, 1, 1, 1 }//P
};
void printSign(int alphabet) {
  for (int j = 0; j < 7; j++) {
    digitalWrite(j + 1, sequence[alphabet][j]);
  }
}
void setup() {
  for (int i = 1; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 7; i++) {
    printSign(i);
    delay(1000);
  }
}