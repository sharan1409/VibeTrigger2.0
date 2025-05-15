#include "VibeTrigger.h"

VibeTrigger::VibeTrigger(uint8_t sensorPin, uint8_t ledPin) {
  this->sensorPin = sensorPin;
  this->ledPin = ledPin;
}

void VibeTrigger::begin() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

bool VibeTrigger::isVibrating() {
  return digitalRead(sensorPin) == HIGH;
}

void VibeTrigger::update() {
  if (isVibrating()) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
