#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "locatie.h"
#include "refill.h"
#include "display.h"

extern int display();

int refill(locatie_t *locatieArray) {
   int i,y,z;
   int product1locaties;
   char product1[12] ="    ";
   int productnummer;
   char isdieklaat[6];
   int hoeveelheidblikje;
   int overigeblikjes;
   double tijdelijkeprijs;
   char legespaties[13] = "          ";


   printf("je wilt dus bijvullen\n");
   printf("welk product wil je bijvullen?\n");
   scanf("%s", &product1);
   i=0;
   do{
      printf("hoe duur is de %s?\n",product1);
      scanf("%lf", &tijdelijkeprijs);
      (isalpha(tijdelijkeprijs) == i);
      if(i!=0){
         tijdelijkeprijs = 11;}
   }while((tijdelijkeprijs > 10) && (tijdelijkeprijs < 0));
   printf("hoeveel blikjes %s heb je?\n", product1);
   scanf("%d", &hoeveelheidblikje);
   do{
      printf("op hoeveel locaties wil de %s plaatsen\n", product1);
      scanf(" %d", &product1locaties);
   }while ((product1locaties > 9) || (product1locaties < 0));

   overigeblikjes = (hoeveelheidblikje % product1locaties);

   if(product1locaties>hoeveelheidblikje){
      printf("u heeft meer locaties ingevuld dan hoeveelheid producten\n"
             "probeer het alstublieft opnieuw\n\n\n");
      return 0;
   }

   i=1;
   do{
      printf("op welke nummer wil je dat product vullen?\n");
      scanf(" %d", &y);
      gets(isdieklaat);
      z = strcmp(isdieklaat, "stop");
      strcpy(locatieArray[y].naam_pro, product1);
      locatieArray[y].prijs_pro = tijdelijkeprijs;
      locatieArray[y].aantal_pro = (hoeveelheidblikje / product1locaties);
      i++;

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

   }while((i <= product1locaties) || z==0);

   y=1;
   if (overigeblikjes>=1){
      do{
         locatieArray[y].aantal_pro++;
         overigeblikjes--;
         y++;
      }while(overigeblikjes>=1);
   }




   return 0;
}

