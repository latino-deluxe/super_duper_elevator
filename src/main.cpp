#include "libs.h"
#include "elevator.h"



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
