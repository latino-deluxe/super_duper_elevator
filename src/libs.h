#include <Arduino.h>
#include <Stepper.h>

#define STEP 100

Stepper mariottide(STEP, 8,9,10,11);

#define P1 5
#define P2 6
#define P3 7

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
