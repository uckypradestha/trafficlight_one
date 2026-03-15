// Pin numbers for each LED
const int rledPin = 9;  // Pin connected to the red LED
const int yledPin = 8;  // Pin connected to the yellow LED
const int gledPin = 7;  // Pin connected to the green LED

void setup() {
  // Set all LED pins as output
  pinMode(rledPin, OUTPUT);
  pinMode(yledPin, OUTPUT);
  pinMode(gledPin, OUTPUT);
}

void loop() {
  // Red LED on for 3 seconds
  digitalWrite(rledPin, HIGH);
  delay(3000);
  digitalWrite(rledPin, LOW);

  // Yellow LED blinks three times
  for (int i = 0; i < 3; i++) {
    digitalWrite(yledPin, HIGH);
    delay(500);
    digitalWrite(yledPin, LOW);
    delay(500);
  }

  // Green LED on for 3 seconds
  digitalWrite(gledPin, HIGH);
  delay(3000);
  digitalWrite(gledPin, LOW);
}