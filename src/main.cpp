#include "libs.h"
#include "elevator.h"

/*
 * la lunghezza di tutto lo scanner è circa 8200 step a 125 RPM 200 STEP
 * quindi un piano è di circa 4100 step a 125 RPM 200 STEP
 * lo step da due piani è di 8200 step a 125 RPM 200 STEP
 */

void setup() {
  for(int i=5;i<=7;i++) pinMode(i, INPUT);
  for(int t=2;t<=4;t++) pinMode(t, INPUT);
  mariottide.setSpeed(RPM);
}

void loop() {
  readPin();
  ascensore();
  /*
  mariottide.step(SU2);
  delay(2000);
  mariottide.step(GIU2);
  delay(2000);
  */
}
