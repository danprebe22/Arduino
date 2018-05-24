#ifndef Morse_h
#define Morse_h
#include "Arduino.h"

class Morse{
  public :
    Morse(int pin);
    void dot();
    void dash();
    void codigo(char c);
  private:
    int _pin;
};

#endif
