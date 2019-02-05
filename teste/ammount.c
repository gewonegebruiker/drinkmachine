#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "locatie.h"

int ammount(locatie_t *locatieArray) {

   char productkeuzehoeveelheid[12] = "    ";
   int keuzehoeveelheid;


   printf("je wilt dus de hoeveelheid weten\n");
   printf("van welk product wil je de hoeveelheid weten?\n");
   scanf("%d", &keuzehoeveelheid);
   gets(productkeuzehoeveelheid);
   if(keuzehoeveelheid>9){
      keuzehoeveelheid == 0;}
   locatieArray[1].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[1].naam_pro);
   locatieArray[2].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[2].naam_pro);
   locatieArray[3].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[3].naam_pro);
   locatieArray[4].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[4].naam_pro);
   locatieArray[5].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[5].naam_pro);
   locatieArray[6].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[6].naam_pro);
   locatieArray[7].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[7].naam_pro);
   locatieArray[8].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[8].naam_pro);
   locatieArray[9].keuze2 = strcmp(productkeuzehoeveelheid, locatieArray[9].naam_pro);

   if (locatieArray[1].keuze2 ==0 || keuzehoeveelheid==1){
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[1].naam_pro, locatieArray[1].oorsprong, locatieArray[1].aantal_pro);
   }  if (locatieArray[2].keuze2 == 0 || keuzehoeveelheid==2) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[2].naam_pro, locatieArray[2].oorsprong, locatieArray[2].aantal_pro);
   }  if (locatieArray[3].keuze2 == 0 || keuzehoeveelheid==3) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[3].naam_pro, locatieArray[3].oorsprong, locatieArray[3].aantal_pro);
   }  if (locatieArray[4].keuze2 == 0 || keuzehoeveelheid==4) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[4].naam_pro, locatieArray[4].oorsprong, locatieArray[4].aantal_pro);
   }  if (locatieArray[5].keuze2 == 0 || keuzehoeveelheid==5) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[5].naam_pro, locatieArray[5].oorsprong, locatieArray[5].aantal_pro);
   }  if (locatieArray[6].keuze2 == 0 || keuzehoeveelheid==6) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[6].naam_pro, locatieArray[6].oorsprong, locatieArray[6].aantal_pro);
   }  if (locatieArray[7].keuze2 == 0 || keuzehoeveelheid==7) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[7].naam_pro, locatieArray[7].oorsprong, locatieArray[7].aantal_pro);
   }  if (locatieArray[8].keuze2 == 0 || keuzehoeveelheid==8) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[8].naam_pro, locatieArray[8].oorsprong, locatieArray[8].aantal_pro);
   }  if (locatieArray[9].keuze2 == 0 || keuzehoeveelheid==9) {
      printf("de hoeveelheid %s op locatie %d is %d blikjes\n", locatieArray[9].naam_pro, locatieArray[9].oorsprong, locatieArray[9].aantal_pro);
   }

   return 0;
}
