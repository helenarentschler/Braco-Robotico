/*
  Servo.h - Biblioteca para criar servo motor.
  Criada por Kenji por Helena, 14 de junho de 2024.
  Lançada em domínio público.
*/

#ifndef Servo_h
#define Servo_h
#include "Arduino.h"

class Servo {

  public:
    Servo(int pin, int upLim, int loLim);
    void begin();
    void move(int ar);
    void write();
    void setBase(int base);
  private:
    int _pin;
    int _pos;
    int _base;
    int _upLim;
    int _loLim;
};

#endif
