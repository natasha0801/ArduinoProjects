// keyboard notes, in b-flat major
const int piezoPin = 8;
int notes[] = { 233, 262, 294, 311, 349, 392 , 440, 466};

// setup
void setup() {
  Serial.begin(9600);
}


void loop() {

  //read button pin and play corresponding note
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  if (keyVal > 1000) {
    tone(piezoPin, notes[7]);
  } else if (keyVal <= 1000 && keyVal > 800) {
    tone(piezoPin, notes[6]);
  } else if (keyVal <= 800 && keyVal > 700) {
    tone(piezoPin, notes[5]);
  } else if (keyVal <= 700 & keyVal > 600) {
    tone(piezoPin, notes[4]);
  } else if (keyVal <= 600 && keyVal > 400) {
    tone(piezoPin, notes[3]);
  } else if (keyVal <= 400 && keyVal > 120) {
    tone(piezoPin, notes[2]);
  } else if (keyVal <= 120 && keyVal >= 80) {
    tone(piezoPin, notes[1]);
  } else if (keyVal <= 80 && keyVal > 20) {
    tone(piezoPin, notes[0]);
  } else {
    noTone(piezoPin);
  }
}
