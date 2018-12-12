#include <Arduino.h>
#include <Stepper.h>

#define STEP 200

#define RPM 125

#define SU1 -4100
#define SU2 -8200
#define GIU1 4100
#define GIU2 8200

Stepper mariottide(STEP, 8,9,10,11);

#define P1 5
#define P2 6
#define P3 7

#define FT 2
#define F1 3
#define F2 4

int st;
int s1;
int s2;

int v1;
int v2;
int v3;

int p;

void readPin() {
  v1 = digitalRead(P1);
  v2 = digitalRead(P2);
  v3 = digitalRead(P3);
  delay(10);
  if(v1==HIGH) p=0;
  if(v2==HIGH) p=1;
  if(v3==HIGH) p=2;
}

void readFinecorsa() {
  st = digitalRead(FT);
  s1 = digitalRead(F1);
  s2 = digitalRead(F2);
  delay(10);
}
