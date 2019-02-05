#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "locatie.h"
#include "ammount.h"
#include "refill.h"
#include "display.h"
#include "order.h"

enum states {
   START,
   LOOP,
   END,
} state;

enum events {
   START_RESET,
   DISPLAY_show,
   OPTIE_kiezen,
   RESET_unused,
};
locatie_t locatieArray[10];
int optie;
int main(void) {
   step_state(START_RESET);
   step_state(DISPLAY_show);
   step_state(OPTIE_kiezen);
   step_state(RESET_unused);
   return 0;
}

void step_state(enum events event) {
   switch (state) {
      case START:
         switch(event){
            case START_RESET:
               start(&locatieArray);
               state = LOOP;
               break;
            default:
               exit(1);
               break;
         }
         break;
      case LOOP:
         switch(event) {
            while (optie !=4){
            case DISPLAY_show:
                  display(&locatieArray);
               case OPTIE_kiezen:
                  printf("wat wil je doen:\n\n1: bijvullen\n2: "
                         "hoeveelheid weten\n3: iets uit de automaat halen\n");
                  scanf("%d", &optie);
                  if (optie==1){
                     refill(&locatieArray);
                  }else if (optie ==3) {
                     order(&locatieArray);
                  } else if (optie == 2) {
                     ammount(&locatieArray);
                  }else if (optie ==4) {
                     state = END;
                  }
               case RESET_unused:
                  reset(&locatieArray);
            }
         }


      case END:
         printf("einde\n");
         exit(1);
         break;
   }

}
