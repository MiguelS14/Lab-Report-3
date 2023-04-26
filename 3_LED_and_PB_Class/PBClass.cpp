#include "PBClass.h"  // Includes the "PBClass" header

PBClass::PBClass(int pin) {  // Class constructor that takes in the pin number as an argument
  this->pin = pin;           // Assigns the private member variable 'pin' to the value passed to the constructor
  pressed = 0;               // Initializes 'pressed' to 0
  thisMany = 0;              // Initializes 'thisMany' to 0
}

void PBClass::init() {         // Initializes the pin as INPUT_PULLUP
  pinMode(pin, INPUT_PULLUP);  
}

void PBClass::readState() {    // Reads the current state of the pin
  state = digitalRead(pin);    
}

int PBClass::isPressed() {     // Checks if the button is pressed once
  readState();                // Reads the current state of the pin
  
  if (!state && !pressed) {   // If the button is currently pressed and wasn't pressed before
    Serial.println("The button has been pressed");  // Prints a message to the serial monitor
    pressed = 1;              // Set the 'pressed' flag to 1
  } else if (state && pressed) {  // If the button is not pressed and was pressed before
    pressed = 0;              // Set the 'pressed' flag to 0
  }
}

int PBClass::howManyPressed() {   // Checks how many times the button was pressed
  readState();                   // Reads the current state of the pin
  
  if (!state && !pressed) {      // If the button is currently pressed and wasn't pressed before
    pressed = 1;                 // Set the 'pressed' flag to 1
    thisMany = thisMany + 1;     // Increment the 'thisMany' counter by 1
    return thisMany;             // Return the number of times the button was pressed
  } else if (state && pressed) { // If the button is not pressed and was pressed before
    pressed = 0;                 // Set the 'pressed' flag to 0
  }
}

void PBClass::howManyReset() {    // Resets the counter for the number of button presses
  thisMany = 0;                  // Sets 'thisMany' back to 0
}
