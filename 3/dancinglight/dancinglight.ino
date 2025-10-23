void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}


void loop() {
  int key1 = digitalRead(A0);
  int key2 = digitalRead(A1);
  int key3 = digitalRead(A2);

  int dancelight1[4][4] = {
    { 0, 0, 0, 1 },
    { 0, 0, 1, 0 },
    { 0, 1, 0, 0 },
    { 1, 0, 0, 0 }
  };

  int dancelight2[2][4] = {
    { 0, 1, 1, 0 },
    { 1, 0, 0, 1 }
  };

  int dancelight3[2][4] = {
    { 0, 1, 0, 1 },
    { 1, 0, 1, 0 }
  };

  for (int i = 2; i <= 5; i++) {
    digitalWrite(i, LOW);
  }

  if (key1 == LOW) {
    for (int a = 0; a < 4; a++) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(i + 2, dancelight1[a][i]);
      }
      delay(200);
    }
  }
  if (key2 == LOW) {
    for (int a = 0; a < 2; a++) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(i + 2, dancelight2[a][i]);
      }
      delay(200);
    }
  }
  if (key3 == LOW) {
    for (int a = 0; a < 2; a++) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(i + 2, dancelight3[a][i]);
      }
      delay(200);
    }
  }
}
