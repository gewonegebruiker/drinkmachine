#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "locatie.h"

void start(locatie_t *locatieArray){
   int i=1;
   do{
      locatieArray[i].oorsprong = i;
      locatieArray[i].aantal_pro = 0;
      locatieArray[i].keuze2 = 2;
      locatieArray[i].prijs_pro = 0;
      i++;

   }while(i<=9);

   strcpy(locatieArray[1].naam_pro, "1");
   strcpy(locatieArray[2].naam_pro, "2");
   strcpy(locatieArray[3].naam_pro, "3");
   strcpy(locatieArray[4].naam_pro, "4");
   strcpy(locatieArray[5].naam_pro, "5");
   strcpy(locatieArray[6].naam_pro, "6");
   strcpy(locatieArray[7].naam_pro, "7");
   strcpy(locatieArray[8].naam_pro, "8");
   strcpy(locatieArray[9].naam_pro, "9");

}
