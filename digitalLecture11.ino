int ledPin[4] = {24, 25, 26, 27};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(500);
    digitalWrite(ledPin[i], LOW);
    delay(500);
  }
}
