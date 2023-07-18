/*
 * Piezo vibration sensor code
 * Derived from https://learn.sparkfun.com/tutorials/piezo-vibration-sensor-hookup-guide/all
 * ADCS MRW: Natasha Evans, Chris Andrade, Anjali Gupta, Jassan Gill
 */

const int PIEZO_PIN = A0; // Piezo output
const float sensitivity = 1.1;  // volts per g (need 
void setup() {
  Serial.begin(9600);
}

void loop() {
  int piezoADC = analogRead(PIEZO_PIN);           // Read Piezo ADC value in
  float piezoVoltage = piezoADC / 1023 * 5.0;     // Convert to a voltage (V)
  float piezoAccel = piezoVoltage / sensitivity;  // Convert to acceleration (G)
  Serial.println(piezoAccel

}
