#include "PB.h" // Include PB header file
PB button(13); // Create an instance of the PB class connected to pin 2

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (button.isPressed()) { // Check if button is pressed
    Serial.print("Button state is :  ");
    Serial.println(digitalRead(13));
  }
 
}
