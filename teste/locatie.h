#include <string.h>
#include <stdlib.h>
#ifndef LOCATIES_H
#define LOCATIES_H

typedef struct locatie
{
   int oorsprong;
   int aantal_pro;
   char naam_pro [20];
   int keuze2;
   double prijs_pro;
   double kosten;
} locatie_t;


void start();
void reset();


#endif
