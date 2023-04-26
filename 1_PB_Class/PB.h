#ifndef PB_h // Defines the file as a header file
#define PB_h 

#include <Arduino.h> // Include Arduino header file

class PB { // Definition of the PB class
  public:
    PB(int pin); // Constructor for creating a PB instance with specified pin
    bool isPressed(); // Method for checking if the button is pressed
  private:
    int _pin; // The pin number the button is connected to
    bool _lastState; // The last recorded state of the button 
    unsigned long _lastChangeTime; // The time when the button state last changed
    unsigned long _debounceDelay; // The amount of time to wait for debounce (to eliminate button bouncing)
};

#endif 
