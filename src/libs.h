#include <Arduino.h>
#include <Stepper.h>

//#define STEP 200

#define RPM 125

#define SU1 -4100
#define SU2 -8200
#define GIU1 4100
#define GIU2 8200

#define SAFESU   200
#define SAFEGIU -200

#define PDir 12
#define PStep 13

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
