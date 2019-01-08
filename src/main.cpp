#include "libs.h"
//#include "elevator.h"

/*
 * la lunghezza di tutto lo scanner è circa 8200 step a 125 RPM 200 STEP
 * quindi un piano è di circa 4100 step a 125 RPM 200 STEP
 * lo step da due piani è di 8200 step a 125 RPM 200 STEP
 */

void stepperino(int,long,int);

void setup() {
  for(int i=5;i<=7;i++) pinMode(i, INPUT);
  for(int g=12;g<=13;g++) pinMode(g,OUTPUT);
}

void loop() {
  stepperino(1, 1000, 1200);                                                                      //la prima variabile è la direzione, la seconda è l'intervallo fra gli impulsi di movimento del motore
  delay(500);                                                                               //delay fra uno step e l'altro
  stepperino(0,1000, 1200);                                                                       //in microsecondi, così hai più controllo (giostratela tu insomma)
  delay(500);
}

void stepperino (int dir, long vel, int STEP) {
  digitalWrite(PDir, dir);                                                                 //imposto la direzione del motore
  for (int pippo = 0; pippo < STEP; pippo++) {                                             //ciclo di for: ripeto l'impulso al motore per quanti step voglio fare
    digitalWrite(PStep, HIGH);                                                             //zippete
    delayMicroseconds(vel);
    digitalWrite(PStep, LOW);                                                              //zuppete
    delayMicroseconds(vel);
  }
}
