#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void play();
void rls();
void agame();

int main(){
	char select;
	
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=       ROCK PAPER SCISSORS GAME!!!     =\n");
	printf("=                                       =\n");
	printf("=========================================\n");
	
	printf("\n\n=========================================\n");
	printf("Selection:\n");
	printf("A. Play!\n");
	printf("B. Rules\n");
	printf("C. About Game\n");
	printf("D. Exit Game\n\n");
	
//	while(select!='A' || select!='B' || select!='C'){
	printf("Select what to do the ROCK: ");
	scanf("%c", &select);
	select = toupper(select);
	
	if(select=='A'){
		printf("\n=========================================\n\n");
		play();
//		break;
	}else if(select=='B'){
		printf("\n=========================================\n\n");
		rls();
//		break;
	}else if(select=='C'){
		printf("\n=========================================\n\n");
		agame;
//		break;
	}else if(select=='D'){
		printf("GGS! See you Next Game!");
//		break;
	}else{
		printf("Only enter letters from A-D (eg. A)\n\n");
	}
//	}
	return 0;
}

void play(){
	int rnd;
	printf("Sean");
}