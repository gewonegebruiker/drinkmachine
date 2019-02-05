#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "locatie.h"
#include "display.h"


int display(locatie_t *locatieArray) {

   char legespaties[13] = "          ";

   printf("\n\n\n%15s  %15s   %15s\n"
          " %s %.2lf  %s %.2lf  %s %.2lf\n"
          "%15s  %15s   %15s\n"
          " %s %.2lf  %s %.2lf  %s %.2lf\n"
          "%15s  %15s   %15s\n"
          " %s %.2lf  %s %.2lf  %s %.2lf\n\n\n"
          ,locatieArray[1].naam_pro, locatieArray[2].naam_pro, locatieArray[3].naam_pro
          ,legespaties ,locatieArray[1].prijs_pro, legespaties, locatieArray[2].prijs_pro, legespaties ,locatieArray[3].prijs_pro
          ,locatieArray[4].naam_pro, locatieArray[5].naam_pro, locatieArray[6].naam_pro
          ,legespaties ,locatieArray[4].prijs_pro,legespaties ,locatieArray[5].prijs_pro,legespaties ,locatieArray[6].prijs_pro
          ,locatieArray[7].naam_pro, locatieArray[8].naam_pro, locatieArray[9].naam_pro
          ,legespaties ,locatieArray[7].prijs_pro,legespaties ,locatieArray[8].prijs_pro,legespaties ,locatieArray[9].prijs_pro);
   return 0;
}
