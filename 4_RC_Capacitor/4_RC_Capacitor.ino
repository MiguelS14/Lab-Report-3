// The main goal of this code is to provide a simple way to read and monitor analog signals from an oscilloscope using an Arduino board.

int value; // creates an variable integer named "value"

// Read analog signal from pin A0 and output to Serial Monitor
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0); // Read analog value from pin A0
  Serial.println(value); // Output analog value to Serial Monitor
  delay(50); // Delay for 50 milliseconds before reading again
}
  