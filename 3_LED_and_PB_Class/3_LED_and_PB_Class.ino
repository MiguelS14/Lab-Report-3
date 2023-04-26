// The goal of this program is to make use of multiple classes that includes multiple header and cpp files to turn on/off LED's and make use of the debounce method for the push button to scan once.

// Include necessary header files
#include "Led.h"
#include "PBClass.h"

// Initialize global variables
int buttonPressed = 0;
int chosenLed;

// Create instances of the Led class for each LED
Led Red(12);
Led Blue(11);
Led Green(10);
Led Yellow(9);

// Create an instance of the PBClass class for the button
PBClass Button(13);

void setup() {
  // Begin serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Initialize each LED
  Red.init();
  Blue.init();
  Green.init();
  Yellow.init();

  // Initialize the button
  Button.init();
}

void loop() {
  // Get the number of times the button has been pressed
  chosenLed = Button.howManyPressed();

  // Use a switch statement to set the appropriate LED based on the number of times the button has been pressed
  switch (chosenLed) {
    case 1:
      Red.on();      // Turns LED on
      Blue.off();    // Turns LED off
      Green.off();   // Turns LED off
      Yellow.off();  // Turns LED off
      break;

    case 2:
      Red.off();     // Turns LED off
      Blue.on();     // Turns LED on
      Green.off();   // Turns LED off
      Yellow.off();  // Turns LED off
      break;

    case 3:
      Red.off();     // Turns LED off
      Blue.off();    // Turns LED off
      Green.on();    // Turns LED on
      Yellow.off();  // Turns LED off
      break;

    case 4:
      Red.off();              // Turns LED off
      Blue.off();             // Turns LED off
      Green.off();            // Turns LED off
      Yellow.on();            // Turns LED on
      Button.howManyReset();  // Reset the button press count
      break;
  }

  // Print the chosen LED to the serial monitor
  Serial.println(chosenLed);
}
