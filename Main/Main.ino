#include "libraries\Color\Color.h"
//#include "libraries\Matrix\Matrix.h"
#include "libraries\Temperature\Temperature.h"
#include "libraries\Laser\Laser.h"
#include "libraries\Mov\Mov.h"
#include "libraries\Cagamattoni\Cagamattoni.h"
#include "libraries\RGB\RGB.h"

Color color;
Temperature tempDx;
Temperature tempSx;
Laser laserFr;
Laser laserDx;
Laser laserSx;
Mov mov();
Cagamattoni cagamattoni();
RGB rgb();


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if(laserDx.get()>200){
    mov.turn();
  }
}
