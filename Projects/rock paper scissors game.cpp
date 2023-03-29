#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

void hdg();
void set();
void play();
void rls();
void agame();

	int lower = 1, upper = 3;
	char pna[25];
	char cna[25];
	
int main(){
	char select;
	
	hdg();
	
	printf("\n\n=========================================\n\n");
	printf("Selection:\n");
	printf("A. New game\n");
	printf("B. Contine\n");
	printf("C. Rules\n");
	printf("D. About Game\n");
	printf("E. Exit Game\n\n");
	
	while(select==NULL)
	{
	printf("Select: ");
	scanf("%s", &select);
	select = toupper(select);
	
	if(select=='A'){
		printf("\n=========================================\n\n");
		set();
		break;
		
	}else if(select=='B'){
		if(pna[0] == '\0'){
			printf("\nCan't Continue a Game without having one...\n\n");
			printf("Enter any keys to continue.......");
   			getch();
   			main();
   			
		}else{
		printf("\n=========================================\n\n");
		play();
		break;
		}
		
	}else if(select=='C'){
		printf("\n=========================================\n\n");
		rls();
		break;
		
	}else if(select=='D'){
		printf("\n=========================================\n\n");
		agame();
		break;
		
	}else if(select=='E'){
		printf("\n=========================================\n\n");		
		printf("GGS! See you Next Time!\n");
		break;
		
	}else{
		select=NULL;
		printf("\nOnly enter letters from A-D (eg. A)\n\n");
		
	}
	}
	return 0;
}
void hdg(){
	system("cls");
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=       ROCK PAPER SCISSORS GAME!!!     =\n");
	printf("=                                       =\n");
	printf("=========================================\n");
	
}

void set(){
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=               SETTINGS                =\n");
	printf("=                                       =\n");
	printf("=========================================\n\n");
	
	printf("\n=========================================\n\n");	
	
	while(true){
		
		printf("Enter Player Name: ");
		scanf("%s", &pna);
		printf("Enter Computer name: ");
		scanf("%s", &cna);
		
	if(strcmp(pna,cna) !=0){
		printf("\n=========================================\n\n");
		play();
		break;
	}else{
		printf("\nPlayer and Computer names must be different!\n\n");
	}
	}
}

void play(){
	srand(time(NULL));
	
	int rnd = 0,rnds = 0,trnd = 0;
	char pch;
	char cch;
	char cnt;
	int bots = 0, ps = 0;
	
		while(rnds<1){
		printf("Enter Number of Rounds: ");	
		scanf("%d", &rnds);
		trnd += rnds;
		
		if(rnds>0.1){
			break;
		}else{
			printf("\nMin. of rounds is 1\n\n");
			rnds = 0;
		}
		}
	
	hdg();
	
	printf("\n=========================================\n");
	printf("\n\t%s\tVS\t%s", pna, cna);
	
		while(rnd!=trnd){
		rnd++;
		printf("\n\nRound: %d\n\n", rnd);
	
		while(pch!='R' || pch!='P' || pch!='S'){
		printf("Select (R/P/S): ");
		scanf("%s", &pch);
		pch = toupper(pch);
	
		if(pch=='R'){
			printf("\n%s chose Rock\n", pna);
			break;
		
		}else if(pch=='P'){
			printf("\n%s chose Paper\n", pna);
			break;
		
		}else if(pch=='S'){
			printf("\n%s chose Scissors\n", pna);
			break;
		
		}else{
			printf("\nOnly Enter R/P/S\n\n");
			
		}
		}
		if(pch!=NULL){
		cch = (rand() % (upper-lower+1)) + lower;
		if(cch==1){
			printf("[BOT]%s chose Rock\n\n", cna);

		
		}else if(cch==2){
			printf("[BOT]%s chose Paper\n\n",cna);

		
		}else if(cch==3){
			printf("[BOT]%s chose Scissors\n\n", cna);

		}
		}
	
		if(pch=='R' && cch==1){
			printf("Tie!\n");
			printf("No one earned a point!");

		}else if(pch=='P' && cch==2){
			printf("Tie!\n");
			printf("No one earned a point!");

		
		}else if(pch=='S' && cch==3){
			printf("Tie!\n");
			printf("No one earned a point!");

		
		}else if(pch=='R' && cch==2){
			printf("[BOT]%s earns a Point!", cna);
			bots++;

		
		}else if(pch=='R' && cch==3){
			printf("%s earns a Point!", pna);
			ps++;


		}else if(pch=='P' && cch==1){
			printf("%s earns a Point!", pna);
			ps++;

			
		}else if(pch=='P' && cch==3){
			printf("[BOT]%s earns a Point!", cna);
			bots++;	

		
		}else if(pch=='S' && cch==1){
			printf("[BOT]%s earns a Point!", cna);
			bots++;	

		
		}else if(pch=='S' && cch==2){
			printf("%s earns a Point!", pna);
			ps++;
	}
	
	if(rnd==trnd){
		break;
	}
	}
	printf("\n\n=========================================\n");	
	printf("\n\n\tTotal Points:\n");
	printf("%s earned a total of %d point", pna, ps);
	
	if(ps>1){
		printf("s!\n");
		}
	else{
			printf("!\n");
		}
			
	printf("%s earned a total of %d point", cna, bots);
	
	if(bots>1){
		printf("s!\n\n");
		}
	else{
			printf("!\n\n");
		}
			
	printf("\n=========================================\n\n");
	if(ps>bots){
		printf("\t%s won!\n", pna);
		printf("With a lead of %d point", ps-bots);
		
		if(ps-bots > 1){
			printf("s\n");
		}
		else{
			printf("\n");
		}
		
	}else if(bots>ps){
		printf("\t[BOT]%s won!\n", cna);
		printf("With a lead of %d point", bots-ps);
		
		if(bots-ps > 1){
			printf("s\n");
		}
		else{
			printf("\n");
		}
		
	}else{
		printf("=========================================\n");
		printf("=                                       =\n");
		printf("=              IT'S A TIE!              =\n");
		printf("=                                       =\n");
		printf("=========================================\n\n");
	}
	printf("\n=========================================\n");
	while(true){
	printf("\nDo you want to play more (Y/N/H): ");
	scanf("%s", &cnt);
	cnt=toupper(cnt);
	
	if(cnt=='Y'){
		printf("\n");
		play();
		break;
		
	}else if(cnt=='N'){
		printf("\nGGS! See you Next Time!\n");
		break;
		
	}else if(cnt=='H'){
		main();
		break;
		
	}else{
		printf("\tOnly Enter either Y or N (eg. Y)");
		cnt = NULL;
	}
	
	}
}

void rls(){
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=                 RULES                 =\n");
	printf("=                                       =\n");
	printf("=========================================\n\n");
	
	printf("'R' is for Rock\n");
	printf("'P' is for Paper\n");
	printf("'S' is for Scissors\n\n");
	
	printf("'Y' is for Yes\n");
	printf("'N' is for No\n");
	printf("'H' is for Home\n\n");		
	
	printf("Only rule is to enjoy the game!\n");	
	printf("Remember it!\n\n");
	
	printf("Enter any keys to continue.......");
    getch();
    main();
}

void agame(){
	int rnd;
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=               ABOUT GAME              =\n");
	printf("=                                       =\n");
	printf("=========================================\n\n");
	
	printf("ROCK PAPER SCISSORS GAME\n");
	printf("Created using C\n");
	printf("Created by: Sean Paul Monton\n\n");
	
	printf("@Nov 2022\n");
	printf("Thank you for playing!\n\n");	
	
	printf("Enter any keys to continue.......");
    getch();
    main();
}