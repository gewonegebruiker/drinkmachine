#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "locatie.h"

double kosten;
double betaald;

int order(locatie_t *locatieArray) {

   char productkeuzehoeveelheid[12] = "    ";
   int vergelijkvooroptie2;
   int i = 0;
   printf("welk product wil je hebben?\n");
   scanf(" %d", &vergelijkvooroptie2);
   gets(productkeuzehoeveelheid);

   locatieArray[1].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[1].naam_pro);
   locatieArray[2].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[2].naam_pro);
   locatieArray[3].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[3].naam_pro);
   locatieArray[4].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[4].naam_pro);
   locatieArray[5].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[5].naam_pro);
   locatieArray[6].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[6].naam_pro);
   locatieArray[7].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[7].naam_pro);
   locatieArray[8].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[8].naam_pro);
   locatieArray[9].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[9].naam_pro);
   if (vergelijkvooroptie2 > 9){
      vergelijkvooroptie2 = 0;
      printf("die locatie bestaat niet\n");
   }

   if ((locatieArray[1].keuze2 == 0 || vergelijkvooroptie2 == 1) && locatieArray[1].aantal_pro > 0){
      printf("hier heb je je %s\n\n\n\n", locatieArray[1].naam_pro);
      kosten = locatieArray[1].prijs_pro; betalen(); i++;                       ///betalen starten
      if (betaald>=kosten){                                                     ///checken of er betaald is
         locatieArray[1].aantal_pro--; }                                        ///als betalen voltooid is product geven
   }  else if ((locatieArray[2].keuze2 == 0 || vergelijkvooroptie2 == 2) && locatieArray[2].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[2].naam_pro);locatieArray[1].aantal_pro--;
      kosten = locatieArray[2].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[2].aantal_pro--; }
   }  else if ((locatieArray[3].keuze2 == 0 || vergelijkvooroptie2 == 3) && locatieArray[3].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[3].naam_pro);
      kosten = locatieArray[3].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[3].aantal_pro--; }
   }  else if ((locatieArray[4].keuze2 == 0 || vergelijkvooroptie2 == 4) && locatieArray[4].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[4].naam_pro);
      kosten = locatieArray[4].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[4].aantal_pro--; }
   }  else if ((locatieArray[5].keuze2 == 0 || vergelijkvooroptie2 == 5) && locatieArray[5].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[5].naam_pro);
      kosten = locatieArray[5].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[5].aantal_pro--; }
   }  else if ((locatieArray[6].keuze2 == 0 || vergelijkvooroptie2 == 6) && locatieArray[6].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[6].naam_pro);
      kosten = locatieArray[6].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[6].aantal_pro--; }
   }  else if ((locatieArray[7].keuze2 == 0 || vergelijkvooroptie2 == 7) && locatieArray[7].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[7].naam_pro);
      kosten = locatieArray[7].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[7].aantal_pro--; }
   }  else if ((locatieArray[8].keuze2 == 0 || vergelijkvooroptie2 == 8) && locatieArray[8].aantal_pro > 0) {
      printf("hier heb je je %s\n\n\n\n", locatieArray[8].naam_pro);
      kosten = locatieArray[8].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[8].aantal_pro--; }
   }  else if ((locatieArray[9].keuze2 == 0 || vergelijkvooroptie2 == 9) && locatieArray[9].aantal_pro > 0) {
      kosten = locatieArray[9].prijs_pro; betalen(); i++;
      if (betaald>=kosten){
         locatieArray[9].aantal_pro--; }
      printf("hier heb je je %s\n\n\n\n", locatieArray[9].naam_pro);
   }

   if (i==0){
      printf("hellaas hebben we geen %s meer, probeer alstublieft een ander product\n\n\n\n",productkeuzehoeveelheid);}
   i=0;
   
   
   
   return 0;
}



int betalen() {
   int Optie = 0;
   double teruggave = 0;
   betaald = 0;
   while (kosten > betaald){
      printf("dat word dan %.2lf euro\n"
             "u heeft al %.2lf euro betaald",kosten, betaald);
      printf("\nwerp geld in\n"
             "1 = 5 cent\n"
             "2 = 10 cent\n"
             "3 = 20 cent\n"
             "4 = 50 cent\n"
             "5 = 1 euro\n"
             "6 = 2 euro\n"
             "7 = stop\n");
      scanf(" %d", &Optie);
      switch(Optie){
         case 1:
            betaald += 0.05;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 2:
            betaald += 0.10;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 3:
            betaald += 0.20;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 4:
            betaald += 0.50;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 5:
            betaald += 1.00;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 6:
            betaald += 2.00;
            printf("\nEUR %.2lf\n", betaald);
            break;
         case 7:
            return 0;
            break;
         default:
            break;
      }}

   if(betaald > kosten){
      teruggave += betaald - kosten;
      printf("neem uw teruggave.\n"
             "EUR %.2f\n"
             "bedankt voor uw aankoop.\n", teruggave);
   } else {
      printf("bedankt voor uw aankoop.\n\n");}
   return 0;
}
