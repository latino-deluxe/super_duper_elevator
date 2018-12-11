#include "libs.h"
#include "elevator.h"

#define RPM 500

#define SU1 -3200
#define SU2 -7350
#define GIU1 3200
#define GIU2 7350

/*
 * la lunghezza di tutto lo scanner è circa 8100 step a 500 RPM
 * quindi un piano è di circa 2700 step a 500 RPM
 */

void setup() {
  for(int i=5;i<=7;i++) pinMode(i, INPUT);
  mariottide.setSpeed(RPM);
}

void loop() {
  readPin();
  //ascensore();
  mariottide.step(SU2);
  delay(2000);
  mariottide.step(GIU2);
  delay(2000);
}
