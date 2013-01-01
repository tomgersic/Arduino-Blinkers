#include "Arduino.h"
#include "LED.h"

int _pin;
unsigned long _previousMillis = 0;
unsigned long _interval;
long _ledState = LOW;

LED::LED(int pin) {
  pinMode(pin,OUTPUT);
  _pin = pin;
}

void LED::Pulse(int interval) {
  _interval = interval;
}

void LED::Update() {
  unsigned long currentMillis = millis();
 
  unsigned long deltaMillis = currentMillis - _previousMillis;
 
  //if greater than the specified interval or if less than 0 (we ran out of numbers)
  if(deltaMillis > _interval || deltaMillis < 0) {
    // save the last time you blinked the LED 
    _previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (_ledState == LOW)
      _ledState = HIGH;
    else
      _ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(_pin, _ledState);  
  }
}
