#include <stdio.h>
#include <stdlib.h>

int main (){
	

char p1, p2;
int num;
int rnd2;
int rnd3;


printf("Enter P1 Name: ");
scanf("%s", &p1);
printf("%s (1): ", &p1);

printf("\nEnter P2 Name: ");
scanf("%s", &p2);
printf("%s (2): ", &p2);
putchar('\n');


printf("\nWho won the first round (1, 2): ");
scanf("%d", &num);


if (num == 1){
	printf("Who won the second round (1, 2): ");
	
	scanf("%d", &rnd2);
		if (rnd2 == 1){
			printf("%s won the Game!", &p1);
			printf("\n%s earned 3 points", &p1);
			printf("\n%s earned 0 points", &p2);
		} else if (rnd2 == 2){
			printf("Who won the third round (1, 2): ");
			scanf("%d", &rnd3);
				if (rnd3 == 1){
					printf("%s wins the Game!", &p1);
					printf("\n%s earned 2 points", &p2);
					printf("\n%s earned 1 points", &p1);
				}  else {
					printf("Player 2 wins the Game!");
					printf("\nPlayer 1 earned 1 points");
					printf("\nPlayer 2 earned 2 points");
				}
		}
} 

else if(num == 2){
	printf("Who won the second round (1, 2): ");
	scanf("%d", &rnd2);
		if (rnd2 == 2){
			printf("Player 2 won the Game!");
			printf("\nPlayer 1 earned 0 points");
			printf("\nPlayer 2 earned 3 points");
		} else if (rnd2 == 1){
			printf("Who won the third round: ");
			scanf("%d", &rnd3);
				if (rnd3 == 1){
					printf("Player 1 wins the Game!");
					printf("\nPlayer 1 earned 2 points");
					printf("\nPlayer 2 earned 1 points");
				}  else {
					printf("Player 2 wins the Game!");
					printf("\nPlayer 1 earned 1 points");
					printf("\nPlayer 2 earned 2 points");
				}
		}
}

else {
	printf("INVALID INPUT!");
}
		
}