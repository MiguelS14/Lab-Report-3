#ifndef LED_H
#define LED_H

#include <Arduino.h>  // <> means that the .h file is not in the same folder as this file

class Led {
private:
  int _pin; // private variable for the LED pins

public:
  Led() {}       // Default Constructor
  Led(int pin);  // Constructor

  void init();  // Initializer
  void on();    // Turn on
  void off();   // Turn off
};

#endif