#include <stdio.h>

// bus service program

/* 
   bno = bus number
   psgr = number of passengers
   emts = empty seats
*/

int main(){

    int bno, psgr, emts;

    printf("Bus Service!\n\n");

        printf("Number of bus: ");
        scanf("%d", &bno);

            if(bno != 0 && bno >= 1){
                printf("Number of Passengers: ");
                scanf("%d", &psgr);

                    if(psgr != 0 && psgr >= 1){
                        bno = bno * 50;

                            if(psgr > bno){
                                printf("Invalid input.");
                            }

                            else{
                                emts = psgr - bno;

                                if(emts <= -1){
                                    emts*=-1;
                                    printf("Remaining seat/s on last bus: %d", emts);
                                }
                                
                                else{
                                    printf("Remaining seat/s on last bus: %d", emts);
                                }     
                            }
                                    
                    }

                    else{
                        printf("Invalid input.");
                    }
            }

            else{
                printf("Invalid input.");
            }

    return 0;
}