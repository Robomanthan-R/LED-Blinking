// Define the pin for the LED
const int ledPin = 13;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 1 second
  delay(1000);
}
