// LED on and off each second

// Constant (unchanging)
  const int ledPin = LED_BUILTIN;  // the number of the LED pin

// Variable (will change)
  int ledState = LOW;  // ledState used to set the LED

  unsigned long previousMillis = 0;  // will store last time LED was updated

// Constant
  const long interval = 1000;  // interval at which to blink (milliseconds)

// Setup (runs once)
  void setup() {
    // set the digital pin as output:
    pinMode(ledPin, OUTPUT);
  }

// Main loop (repeats)
  void loop() {
    // check to see if it's time to blink the LED (if the difference
    // between the current time and last time you blinked the LED is bigger than
    // the interval at which you want to blink the LED).

    unsigned long currentMillis = millis(); // gets current time

    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;       // turns current time into "previous" for referal

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
    }
  }
