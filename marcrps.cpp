#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playerChoice();
void computerChoice();
void result();
void checkwinner();

int playerPick;
int computerPick;
int gameResults = 0;
int points = 0;
int rnd = 0;
int roundCount = 0;
int winner = 0;
int gamewinner = 0;
int main()
{
int roundin; //round input
int reset = 0;
do{ 
printf("How many rounds do you want to play? (1 - 3 rounds only): ");
scanf("%d", &roundin);
if(roundin > 3){
    system("cls");
    printf("Enter a numbers' only (1 - 3)!\n\n");
    return main();
}
else{
rnd = rnd + roundin;
while(roundCount < rnd){
printf("\n\nROCK, PAPER, SCISSORS\n\n");
playerChoice();
computerChoice();
result();
roundCount++;
}
    if(gamewinner == 0 || gamewinner == 1 || gamewinner == 2 || gamewinner == 3){
        printf("\n*************************\n");
        printf("\n***PLAYER WON THE GAME***\n");
        printf("\n*************************\n");
    }
    else if(gamewinner == -2 || gamewinner == -3 || gamewinner == -4 || gamewinner == -6){
        printf("\n************************************\n");
        printf("\n***COMPUTER WON THE GAME***\n");
        printf("\n************************************\n");
    }
    else{
        printf("\n*************\n");
        printf("**DRAW!!!**");
        printf("\n*************\n");
    }
}

printf("\nDo you wish to continue? (1.Yes 2. No): ");
    scanf("%d", &reset);
    if(reset == 2){
    reset++;
    }  
    gamewinner = 0;
    system("cls");
}while(reset == true);

    system("cls");
    printf("Program Closed...\n");
    printf("Thank you for playing!!!");
return 0;
}

void playerChoice(){
    printf("Enter your selection\n");
    printf("1. Rock\n2. Paper\n3. Scissors: ");
    scanf("%d", &playerPick);
    
        switch(playerPick){
            case 1:
            printf("\nYou picked rock!\n");
            points+=6;
            break;
            
            case 2:
            printf("\nYou picked paper!\n");
            points+=5;
            break;
            
            case 3:
            printf("\nYou picked scissors!\n");
            points+=4;
            break;
            
            default:
            printf("Enter Valid Selection");
            break;
        }
}

void computerChoice(){
    srand(time(0));
    computerPick = (rand() % 3) + 1;
    
        switch(computerPick){
            case 1:
            printf("\nComputer picked rock!\n");
            points-=3;
            break;
            
            case 2:
            printf("\nComputer picked paper!\n");
            points*=2;
            break;
            
            case 3:
            printf("\nComputer picked scissors!\n");
            points/=1;
            break;
        }
}

void result(){
    switch(points){
        case 12:
        printf("\nPAPER wins against ROCK.\n\nCOMPUTER won the round!\n");
        winner += 1;
        break;
        
        case 6:
        printf("\nROCK wins against SCISSORS.\n\nPLAYER won the round!\n");
        winner += 2;
        break;
        
        case 2:
        printf("\nPAPER wins against ROCK.\n\nPLAYER won the round!\n");
        winner += 3;
        break;
        
        case 5:
        printf("\nSCISSOR wins against PAPER.\n\nCOMPUTER won the round!\n");
        winner += 4;
        break;
        
        case 1:
        printf("\nROCK wins against SCISSORS.\n\nCOMPUTER won the round!\n");
        winner += 5;
        break;
        
        case 8:
        printf("\nSCISSOR wins against PAPER.\n\nPLAYER won the round!\n");
        winner += 6;
        break;
        
        default:
        printf("\nIT IS A TIE!\n");
        break;
    }
        if(points == 2 || points == 6 || points == 8){
        printf("\nPlayer earned 1 point for winning the round\n\n");
        gamewinner+=1;  
    }
    else if(points == 1 || points == 5 || points == 12){
        printf("\nComputer earned 1 point for winning the round\n\n");
        gamewinner-=2;
    }
    else{
        printf("\nBoth PLAYERS earned a point\n\n");
    }
    points = 0;
}