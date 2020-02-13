#define LED_PIN 2

void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}
void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}

void timedBlink(int interval) {
    digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);                       // wait for a second
}

/*void loop() {
  timedBlink(250);
  timedBlink(500);
  timedBlink(1000);
  }
*/
void loop() {
  // put your main code here, to run repeatedly:
    int i;
    for(i = 0; i < 100; i++) {
    dimmer(10, i);
    //delay(3);
    }
    for(i = 100; i > 0; i--) {
    dimmer(10, i);
    //delay(3);
    }
}
