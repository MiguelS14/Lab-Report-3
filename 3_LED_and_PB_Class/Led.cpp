#include "Led.h"  // "" means that the .h file is in the same folder as this file

Led::Led(int pin) {
  _pin = pin;
}

void Led::init() { // initializes the "_pin' of the led that is being created in the ino file.
  pinMode(_pin, OUTPUT);
}

void Led::on() { // Method that turns the Led on
  digitalWrite(_pin, 1);
}

void Led::off() { // Method that urns the Led off
  digitalWrite(_pin, 0);
}