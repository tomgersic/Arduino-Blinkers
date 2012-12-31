/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 */

//#include "OopFix.h"
#include "LED.h"

int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated
long interval = 1000;           // interval at which to blink (milliseconds)
LED *led13;
LED *led12;
LED *led11;


void setup() {
  Serial.print("Hello World");
  // set the digital pin as output:
  led12 = new LED(12);
  led13 = new LED(13);
  led11 = new LED(11);

  led12->Pulse(75);
  led13->Pulse(100);
  led11->Pulse(80);

}

void loop()
{
  led13->Update();
  led12->Update();  
  led11->Update();  
}
