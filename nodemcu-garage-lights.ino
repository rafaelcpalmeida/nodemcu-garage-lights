// Set GPIOs for LED and reedswitch
const int reedSwitch = 4;  // D2
const int led = 2;         // Internal LED
const int relay = 15;      // D8

void setup() {
  // Serial port for debugging purposes
  Serial.begin(9600);

  // Read the current gate state
  pinMode(reedSwitch, INPUT_PULLUP);

  // Set LED state to match the opposite of gate state
  pinMode(led, OUTPUT);

  // Set the relay as output
  pinMode(relay, OUTPUT);
}

void loop() {
  if (digitalRead(reedSwitch)==HIGH){
    digitalWrite(led, HIGH);
    digitalWrite(relay, LOW);
    Serial.println("Your gate is Open");
  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(relay, HIGH);
    Serial.println("Your gate is Closed");
  }
  delay(1000);
}
