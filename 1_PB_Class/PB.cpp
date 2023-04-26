#include "PB.h" // Include PB header file

PB::PB(int pin) { // Constructor implementation
  _pin = pin;
  _lastState = false;
  _lastChangeTime = 0;
  _debounceDelay = 50;
  pinMode(_pin, INPUT_PULLUP); // Set button pin to input mode with pull-up resistor
}

bool PB::isPressed() { // isPressed method implementation
  bool currentState = !digitalRead(_pin); // Read current state of button pin
  unsigned long currentTime = millis(); // Get current time
  if (currentState != _lastState) { // Button state has changed
    _lastChangeTime = currentTime; // Record time of state change
  }
  if ((currentTime - _lastChangeTime) > _debounceDelay) { // Enough time has passed since last state change
    if (currentState != _lastState) { // Button state has changed
      _lastState = currentState; // Record new button state
      return _lastState; // Return new button state
    }
  }
  return false; // Button is not pressed
}
