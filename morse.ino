// morse code with arduino

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

char c[] = ".---..-";

void loop() {
  for (int i = 0; i < sizeof(c); i++) {
    if (c[i] == '.') {
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
    }
    if (c[i] == '-') {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(500);
    }
    if (c[i] == ' ') {
      delay(1000);
    }
  }
}