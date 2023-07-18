// Software for "waving" robot
// When user waves, the light level drops, and the robot will "wave" in response

// libraries
#include <Servo.h>

// initialize varaibles
Servo myServo;
const int ledPin = 13;
int lightLevel;
int standardLightLevel = 1023;


void setup() {

  // set up servo
  myServo.attach(9);
  Serial.begin(9600);

  // calibrate light level
  digitalWrite(ledPin, HIGH);
  while (millis() < 5000) {
    int lightLevel = analogRead(A0);
    if (lightLevel < standardLightLevel) {
      standardLightLevel = lightLevel;
    }
  }
  digitalWrite(ledPin, LOW);
  Serial.println(standardLightLevel);
}

void loop() {
  
  // check light
  lightLevel = analogRead(A0);

  // if light is low, do waving animation
  Serial.println(lightLevel);
  if (lightLevel < standardLightLevel) {
    myServo.write(140);
    delay(500);
    myServo.write(40);
    delay(500);
    myServo.write(140);
    delay(500);
    myServo.write(40);
    delay(500);
    myServo.write(90);
  }
  delay(15);

}
