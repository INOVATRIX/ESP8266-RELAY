#define relay_pin 4

void setup() {
  pinMode(relay_pin , OUTPUT);
}

void loop() {
  digitalWrite(relay_pin, LOW);
  delay(1000);
  digitalWrite(relay_pin, HIGH);
  delay(1000);
}