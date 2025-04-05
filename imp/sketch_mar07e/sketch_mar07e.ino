const int buttonPin = A0;  // Push button pin
const int ledPin = 8;     // LED pin

bool ledState = false;    // Track LED state
bool lastButtonState = HIGH;

void setup() {
    pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up resistor
    pinMode(ledPin, OUTPUT);
}

void loop() {
    bool buttonState = digitalRead(buttonPin);

    // Detect button press (change from HIGH to LOW)
    if (buttonState == LOW && lastButtonState == HIGH) {
        delay(50); // Debounce delay
        ledState = !ledState; // Toggle LED state
        digitalWrite(ledPin, ledState);
    }

    lastButtonState = buttonState;
}
