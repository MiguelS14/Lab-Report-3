const int signalPin = 9; // sets a variable "signalPin" with 9

void setup() {

pinMode(signalPin, OUTPUT); // sets the signalPin as an output (5V).

}
void loop() {
digitalWrite(signalPin, HIGH);
delayMicroseconds(500); // 500 microseconds High, 1 kHz square wave
digitalWrite(signalPin, LOW);
delayMicroseconds(500); // 500 microseconds Low, 1 kHz square wave

  