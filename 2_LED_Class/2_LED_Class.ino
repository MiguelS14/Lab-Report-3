// The goal of this program is to be able to turn initiate an LED and switch it on and off with the use of a class that is separeted in three files .ino, .h, and .cpp.

#include "Led.h"  // Includes LED header file

Led Red(12); // Construct the object and declare its pin
Led Blue(11); // Construct the object and declare its pin
int time = 500; // Creates an integer to define miliseconds for delay

void setup() {

  // Initialize each LED
  Red.init();   // Initialize Red LED
  Blue.init();  // Initialize Blue LED
}

void loop() {

  Red.on(); // Red LED on
  Blue.off(); // Blue LED off

  delay(time); // Delay for the value of time in the integer which is 500ms

  Red.off(); // Red LED off
  Blue.on(); // Blue LED on

  delay(time); // Delay for the value of time in the integer which is 500ms
}
