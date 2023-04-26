#ifndef PBCLASS_H  // If the "PBClass.h" is not defined:
#define PBCLASS_H  // Define the "PBClass.h"

#include <Arduino.h>  // Includes the "Arduino" header in the code

class PBClass {  // Creates a class called "PBClass"

private:      // The private access
  int pin;    // Integer indicating the pin number
  int state;  // Integer indicating the state of the pin
  int pressed;  // Integer indicating if the button has been pressed
  int thisMany;  // Integer indicating the number of times the button has been pressed

public:              // The public access
  PBClass(){};       // The default constructor
  PBClass(int pin);  // The constructor of the class

  void init();       // Initializes the pin as a pullup input
  void readState();  // Reads the state of the button
  int isPressed();   // Checks if the button has been pressed and returns 1 if it has
  int howManyPressed();  // Checks how many times the button has been pressed and returns the value
  void howManyReset();   // Resets the count of how many times the button has been pressed to 0
};

#endif  // End the if statement
