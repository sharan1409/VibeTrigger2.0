#ifndef VIBETRIGGER_H
#define VIBETRIGGER_H

#include "Arduino.h"

class VibeTrigger {
  private:
    uint8_t sensorPin;
    uint8_t ledPin;

  public:
    VibeTrigger(uint8_t sensorPin, uint8_t ledPin = LED_BUILTIN);
    void begin();
    bool isVibrating();
    void update();
};

#endif
