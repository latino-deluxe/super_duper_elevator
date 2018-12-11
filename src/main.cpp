#include "libs.h"
#include "elevator.h"

/*
 * la lunghezza di tutto lo scanner è circa 8100 step a 500 RPM
 * quindi un piano è di circa 3200 step a 500 RPM
 * per motivi a noi ignoti, lo step da due piani è di 7350 step a 500 RPM
 * facendo un totale di 10550 step? cazzi sua
 */

void setup() {
  for(int i=5;i<=7;i++) pinMode(i, INPUT);
  for(int t=2;t<=4;t++) pinMode(t, INPUT);
  mariottide.setSpeed(RPM);
}

void loop() {
  readPin();
  //ascensore();
  //ascens_finec();
  mariottide.step(SU2);
  delay(2000);
  mariottide.step(GIU2);
  delay(2000);
}
