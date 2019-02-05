#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "locatie.h"

void reset(locatie_t *locatieArray){


if (locatieArray[1].aantal_pro == 0){                                            //lege locaties terug naar oorspronkelijke locatie zetten
   strcpy(locatieArray[1].naam_pro, "1");
   locatieArray[1].prijs_pro = 0;
}
if (locatieArray[2].aantal_pro == 0){
   strcpy(locatieArray[2].naam_pro, "2");
   locatieArray[2].prijs_pro = 0;
}
if (locatieArray[3].aantal_pro == 0){
   strcpy(locatieArray[3].naam_pro, "3");
   locatieArray[3].prijs_pro = 0;
}
if (locatieArray[4].aantal_pro == 0){
   strcpy(locatieArray[4].naam_pro, "4");
   locatieArray[4].prijs_pro = 0;
}
if (locatieArray[5].aantal_pro == 0){
   strcpy(locatieArray[5].naam_pro, "5");
   locatieArray[5].prijs_pro = 0;
}
if (locatieArray[6].aantal_pro == 0){
   strcpy(locatieArray[6].naam_pro, "6");
   locatieArray[6].prijs_pro = 0;
}
if (locatieArray[7].aantal_pro == 0){
   strcpy(locatieArray[7].naam_pro, "7");
   locatieArray[7].prijs_pro = 0;
}
if (locatieArray[8].aantal_pro == 0){
   strcpy(locatieArray[8].naam_pro, "8");
   locatieArray[8].prijs_pro = 0;
}
if (locatieArray[9].aantal_pro == 0){
   strcpy(locatieArray[9].naam_pro, "9");
   locatieArray[9].prijs_pro = 0;
}

}
