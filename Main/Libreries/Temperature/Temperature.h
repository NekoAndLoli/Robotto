#ifndef Temperature_h
#define Temperature_h

#include <Arduino.h>

class Temperature {
  public:
    Temperature();
    float get();
  private:
};

Temperature::Temperature();

float Temperature::get(){
	return 0;
}
#endif
