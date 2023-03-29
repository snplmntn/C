#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void trivia1();
void trivia2();
void trivia3();
void trivia4();
void trivia5();
void results();

int start, qnum, score, points=3;

int main(){
	
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=            TRIVIA TIME!!!             =\n");
	printf("=                                       =\n");
	printf("=========================================\n");

	while(start!=1 || start!=2 || start!=3 || start!=4 || start!=5)
	{
	printf("\nTo start enter a number between 1-5: ");
	scanf("%d", &start);
	
	if(start==1)
	{
		trivia1();
		break;
	}
	
	else if(start==2)
	{
		trivia2();
		break;
	}
	
	else if(start==3)
	{
		trivia3();
		break;
	}
	
	else if(start==4)
	{
		trivia4();
		break;
	}
	
	else if(start==5)
	{
		trivia5();
		break;
	}
	else
	{
	printf("Only enter numbers from 1-5(eg. 3)\n");
	}
	
	}
	return 0;
}

void trivia1()		
{
	char ans;
	const char*q1[] = {"A. Artic", "B. Indian", "C. Atlantic", "D. Pacific"};
	const char*tease[] = {"Dude do you even study?", "BRUH read a book!","Geez, touch some books bro."};
		qnum++;
		
		while(!(ans=='D'))
		{
		printf("\n%d. What is the largest ocean in the earth?\n", qnum);
		printf("%s\n%s\n%s\n%s\n",q1[0], q1[1], q1[2], q1[3]);
		printf("Answer: ");
		scanf("%s", &ans);
		ans = toupper(ans);
				
		if(ans=='D')
		{
			printf("\nYou got it right!\nPacific is the largest and deepest ocean in the world.\n");
			if(points<=1){
				points=1;
				score+=points;
				printf("You earned %d point \n\n", points);
				
			}
			else{
				printf("You earned %d points\n\n", points);
				score+=points;

			}
			points=3;
			
			switch(start)
			{
				case 1:
					trivia5();
					break;
					
				case 2:
					trivia5();
					break;
					
				case 3:
					results();
					break;
					
				case 4:
					results();
					break;
					
				case 5:
					trivia3();
					break;	
			}
				
		}
		else if(ans=='A')
		{
			printf("\n%s\n\n", tease[0]);
			points--;
		}
		
		else if(ans=='B')
		{
			printf("\n%s\n\n", tease[1]);
			points--;
		}
		
		else if(ans=='C')
		{
			printf("\n%s\n\n", tease[2]);
			points--;
		}
		else
		{
			printf("\nOnly enter letters from A-D(eg. C).\n\n");
		}
	}
		
}

void trivia2()
{
	char ans;
	const char*q1[] = {"A. USA", "B. Russia", "C. China", "D. Canada"};
	const char*tease[] = {"Are you one of those dumbass american?!", "Woah! are you a dumbass chinese? a rare kind huh?","Bro... really? Canada the largest?"};
		qnum++;
		
		while(!(ans=='B'))
		{
		printf("\n%d. What is the largest country?\n", qnum);
		printf("%s\n%s\n%s\n%s\n",q1[0], q1[1], q1[2], q1[3]);
		printf("Answer: ");
		scanf("%s", &ans);
		ans = toupper(ans);
		
		if(ans=='B')
		{
			printf("\nYou got it right!\nJust by looking on a map you can tell how massive russia is, it can even make you think it's a continent,\nhowever it is not!\n");
			if(points<=1){
				points=1;
				score+=points;
				printf("You earned %d point \n\n", points);

			}
			else{
				printf("You earned %d points\n\n", points);
				score+=points;

			}
			points=3;

			
			switch(start)
			{
				case 1:
					trivia4();
					break;
					
				case 2:
					trivia1();
					break;
					
				case 3:
					trivia5();
					break;
					
				case 4:
					trivia5();
					break;
					
				case 5:
					results();
					break;	
			}
				
		}
		else if(ans=='A')
		{
			printf("\n%s\n\n", tease[0]);
			points--;
		}
		
		else if(ans=='C')
		{
			printf("\n%s\n\n", tease[1]);
			points--;
		}
		
		else if(ans=='D')
		{
			printf("\n%s\n\n", tease[2]);
			points--;
		}
		else
		{
			printf("\nOnly enter letters from A-D(eg. C).\n\n");
		}
	}	
}

void trivia3()
{
	char ans;
	const char*q1[] = {"A. Vatican City", "B. Texas", "C. Tokyo", "D. Taiwan"};
	const char*tease[] = {"Hmm at first thought i really think it is too, however it is not.", "Texas is a state not a country... touch some books!","Uhh... Tokyo is a city/prefecture not a country."};
		qnum++;
		//sean's trivia
		while(!(ans=='A'))
		{
		printf("\n%d. What country has the least population?\n", qnum);
		printf("%s\n%s\n%s\n%s\n",q1[0], q1[1], q1[2], q1[3]);
		printf("Answer: ");
		scanf("%s", &ans);
		ans = toupper(ans);		
		
		if(ans=='A')
		{
			printf("\nYou got it right!\nEither you thought this was only a city or you really know this, which one are you?\nFun Fact! The world's smallest city-state came into existence on the 11th of February 1929\nafter the signing of the Lateran Treaty. This treaty granted Vatican City the status of a country.\n");
			if(points<=1){
				points=1;
				score+=points;
				printf("You earned %d point \n\n", points);

			}
			else{
				printf("You earned %d points\n\n", points);
				score+=points;

			}
			points=3;

			
			switch(start)
			{
				case 1:
					trivia2();
					break;
					
				case 2:
					trivia4();
					break;
					
				case 3:
					trivia4();
					break;
					
				case 4:
					trivia1();
					break;
					
				case 5:
					trivia4();
					break;	
			}
				
		}
		else if(ans=='D')
		{
			printf("\n%s\n\n", tease[0]);
			points--;
		}
		
		else if(ans=='B')
		{
			printf("\n%s\n\n", tease[1]);
			points--;
		}
		
		else if(ans=='C')
		{
			printf("\n%s\n\n", tease[2]);
			points--;
		}
		else
		{
			printf("\nOnly enter letters from A-D(eg. C).\n\n");
		}
	}		
}

void trivia4()
{
	char ans;
	const char*q1[] = {"A. Egypt", "B. USA", "C. China", "D. Japan"};
	const char*tease[] = {"Hmm it got me thinking, why is it not Egypt?", "Definetely not USA.","I mean... it could be but it is not."};
		qnum++;
		
		while(!(ans=='D'))
		{
		printf("\n%d. What is the oldest country in the world?\n", qnum);
		printf("%s\n%s\n%s\n%s\n",q1[0], q1[1], q1[2], q1[3]);
		printf("Answer: ");
		scanf("%s", &ans);
		ans = toupper(ans);		
		
		if(ans=='D')
		{
			printf("\nYou got it right!\nYup it is Japan, dating back to 660 BCE.\n");
			if(points<=1){
				points=1;
				score+=points;
				printf("You earned %d point \n\n", points);

			}
			else{
				printf("You earned %d points\n\n", points);
				score+=points;

			}
			points=3;

			
			switch(start)
			{
				case 1:
					results();
					break;
					
				case 2:
					results();
					break;
					
				case 3:
					trivia2();
					break;
					
				case 4:
					trivia2();
					break;
					
				case 5:
					trivia2();
					break;	
			}
				
		}
		else if(ans=='A')
		{
			printf("\n%s\n\n", tease[0]);
			points--;
		}
		
		else if(ans=='B')
		{
			printf("\n%s\n\n", tease[1]);
			points--;
		}
		
		else if(ans=='C')
		{
			printf("\n%s\n\n", tease[2]);
			points--;
		}
		else
		{
			printf("\nOnly enter letters from A-D(eg. C).\n\n");
		}
	}		
}

void trivia5()
{
	char ans;
	const char*q1[] = {"A. Africa", "B. North America", "C. Europe", "D. Antartica"};
	const char*tease[] = {"I mean it looks very big in the map but it is not.", "Nope, not Europe.","UHH maybe? JK it's not."};
		qnum++;
		
		while(!(ans=='A'))
		{
		printf("\n%d. Which is the largest continent\n", qnum);
		printf("%s\n%s\n%s\n%s\n",q1[0], q1[1], q1[2], q1[3]);
		printf("Answer: ");
		scanf("%s", &ans);
		ans = toupper(ans);		
		
		if(ans=='A')
		{
			printf("\nYou got it right!\nYup in the selection Africa is the largest with a whopping 30.3 million km2 in size.\n");
			if(points<=1){
				points=1;
				score+=points;
				printf("You earned %d point \n\n", points);

			}
			else{
				printf("You earned %d points\n\n", points);
				score+=points;

			}
			points=3;

			
			switch(start)
			{
				case 1:
					trivia3();
					break;
					
				case 2:
					trivia3();
					break;
					
				case 3:
					trivia1();
					break;
					
				case 4:
					trivia3();
					break;
					
				case 5:
					trivia1();
					break;	
			}
				
		}
		else if(ans=='B')
		{
			printf("\n%s\n\n", tease[0]);
			points--;
		}
		
		else if(ans=='C')
		{
			printf("\n%s\n\n", tease[1]);
			points--;
		}
		
		else if(ans=='D')
		{
			printf("\n%s\n\n", tease[2]);
			points--;
		}
		else
		{
			printf("\nOnly enter letters from A-D(eg. C).\n\n");
		}
	}			
}

void results()
{
	char choice;
	
	printf("Congratulations!\nYou've made it!\nYou earned a total of %d points\n", score);
	
	if(score==15){
		printf("You're rating is SS!");
	}	else if(score==14){
		printf("You're rating is S!");
	}	else if(score>=12 && score<=13){
		printf("You're rating is A");
	}	else if(score>=10 && score<=11){
		printf("You're rating is B");
	}	else if(score>=8 && score<=9){
		printf("You're rating is C");
	}	else if(score>=6 && score<=7)	{
		printf("You're rating is D");
	}	else if(score==5){
		printf("You're rating is F");
	}
	
	while(choice!='Y' || choice!='N')
	{
	printf("\n\nWould you like to try again? (Y/N): ");
	scanf("%s", &choice);
	if(choice=='Y')
	{
		system("cls");
		printf("\nGoodluck!\n\n");
		main();
		break;
	}
	
	else if(choice=='N')
	{
		printf("\GGS! See you next time.\n");
		break;
	}
	
	else
	{
		printf("Only enter Y/N (eg. Y)");
	}
	}
}