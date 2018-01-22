#ifndef IMU_h
#define IMU_h

#include <Arduino.h>

class IMU {
  public:
    IMU();
    float get();
  private:
};
IMU::IMU();

float IMU::get(){
	return 0;
}
#endif
