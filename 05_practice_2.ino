#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 1);

}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for (int i = 1; i <= 5; i++) {
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
  }
  while(1) {
    digitalWrite(PIN_LED, 1);
  }
}
