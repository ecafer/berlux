// Pin connected to the LED
const int ledPin = 8;

void setup() {
  // initialize digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);

  // wait for a second
  delay(1000);
}
