#include "Arduino.h"
#include "Servo.h"

Servo::Servo(int pin, int loLim, int upLim) {
  _pin = pin;
  _pos = 90;
  _base = 0;
  _upLim = upLim;
  _loLim = loLim;
}

void Servo::begin() {
	pinMode(_pin, OUTPUT);
}

void Servo::move(int ar) {

 	if(ar < (_base-30) && _pos>_loLim)
	    _pos--;
	if(ar > (_base+30) && _pos<_upLim)
	    _pos++;
}

void Servo::setBase(int base) {
	_base = base;
}

void Servo::write() {
	digitalWrite(_pin, HIGH);
	delayMicroseconds((_pos*10.25)+450);
	digitalWrite(_pin, LOW);
  
  delay(5);
}

