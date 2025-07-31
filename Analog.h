#ifndef Analog_h
#define Analog_h
#include "Arduino.h"

class Analog {

  public:
    Analog(int pinX, int pinY, int dig);
    void begin();
    int getBaseValue(int pin);
    int _pinX;
    int _pinY;
    int _dig;
  private:
};

#endif
