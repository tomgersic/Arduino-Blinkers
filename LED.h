#ifndef LED_h
#define LED_h
class LED
{
  public:    
    LED(int pin);
    void Pulse(int interval);
    void Update();
  private:
    int _pin;
    unsigned long _previousMillis;
    unsigned long _interval;
    long _ledState; 
};
#endif


