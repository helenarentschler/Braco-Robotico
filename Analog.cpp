#include "Arduino.h"
#include "Analog.h"

Analog::Analog(int pinX, int pinY, int dig) {
  _pinX = pinX;
  _pinY = pinY;
  _dig = dig;
}

void Analog::begin() {
	pinMode(_pinX, INPUT);
	pinMode(_pinY, INPUT);	
	pinMode(_dig, INPUT);

  Serial.begin(9600);
}	

int Analog::getBaseValue(int pin) {
	
	int i = 0, values = 0;
	
	while(i < 10) {
		values += analogRead(pin);
    //Serial.println(5000 + 300);//values);
    delay(5);
		i++;
	}

  //Serial.println(round(values/10));
	return round(values/10);
} 


