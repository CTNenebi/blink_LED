// Components used:
// Arduino Mega, breadboard, red LED and resistor

int ledPIN = 11; // declare and initialize the led pin 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPIN, HIGH); // turn the LED on
  delay(5000);                // wait for 5 seconds
  digitalWrite(ledPIN, LOW);  // turn the LED off
  delay(1000);                // wait for 1 second
}
