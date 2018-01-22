#ifndef Laser_h
#define Laser_h

#include <Arduino.h>

class Laser {
  public:
    Laser();
    float get();
  private:
};

Laser::Laser();

float Laser::get(){
	return 0;
}
#endif
