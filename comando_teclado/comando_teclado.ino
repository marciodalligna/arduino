int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char value = Serial.read();
    if (value == '1') {
      digitalWrite(ledPin, HIGH);
    } else if (value == '0') {
      digitalWrite(ledPin, LOW);
    }
    Serial.println(value);
  }
  delay(1000);
}
