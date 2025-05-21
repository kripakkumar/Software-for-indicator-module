#include <Arduino.h>

// Pin definitions
const int leftButtonPin = 12;
const int rightButtonPin = 13;
const int leftLedPin = 14;
const int rightLedPin = 15;

void setup() {
  Serial.begin(115200);

  // Configure button pins with internal pull-ups
  pinMode(leftButtonPin, INPUT_PULLUP);
  pinMode(rightButtonPin, INPUT_PULLUP);

  // Configure LED pins as outputs
  pinMode(leftLedPin, OUTPUT);
  pinMode(rightLedPin, OUTPUT);
}

void loop() {
  bool leftPressed = digitalRead(leftButtonPin) == LOW;
  bool rightPressed = digitalRead(rightButtonPin) == LOW;

  // Turn LEDs on/off based on button press
  digitalWrite(leftLedPin, leftPressed ? HIGH : LOW);
  digitalWrite(rightLedPin, rightPressed ? HIGH : LOW);

  // Print status to Serial Monitor
  Serial.print("Left Indicator: ");
  Serial.print(leftPressed ? "ON" : "OFF");
  Serial.print(", Right Indicator: ");
  Serial.println(rightPressed ? "ON" : "OFF");

  delay(200);  // debounce and update delay
}

