#define LED_PIN 2

void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int interval) {
    digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);                       // wait for a second
}

void loop() {
  // put your main code here, to run repeatedly:
  timedBlink(250); // .25 second interval
  timedBlink(500); // .5 second interval
  timedBlink(1000);// 1 second interval
}
