#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <conio.h>
#define p printf
#define s scanf

int main();
void q1();
void q2();
void end();

int main(){
	char choice;
	
	while(1){
		system("cls");
		printf("=========================================\n");
		printf("=                                       =\n");
		printf("=          MAHAL KA BA NI SEAN???       =\n");
		printf("=                                       =\n");
		printf("=========================================\n\n");
		
		p("Choices: ");
		p("\n1. Yes");
		p("\n2. Yes na Yes");
		p("\n3. Yes na Yes na Yes");
		p("\n4. Yes na Yes na Yes na Yes");
		p("\n5. Yes na Yes na Yes na Yes na Yes");
		p("\n6. Yes na Yes na Yes na Yes na Yes na Yes");
		p("\nAnswer: ");
		s("%s", &choice);
		choice = toupper(choice);
		
		if(choice=='Y'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;
		}else if(choice=='1'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;
		}else if(choice=='2'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;
		}else if(choice=='3'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;	
		}else if(choice=='4'){
			p("TAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;	
		}else if(choice=='5'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;	
		}else if(choice=='6'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q1();
			break;	
		}else{
			p("\nENGKKKKKKKKKKKKKK");
			p("\nThat's wrong in many ways");
			p("\nOh!!! Wrong in all ways!");
			
			p("\nEnter any keys to continue.......");
   			getch();
   			main();
   			break;
		}
	}
	return 0;
}

void q1(){
	char choice;
	
	while(choice==NULL){
		system("cls");
		printf("=========================================\n");
		printf("=                                       =\n");
		printf("=       MAY IBA BANG GUSTO SI SEAN?     =\n");
		printf("=                                       =\n");
		printf("=========================================\n\n");
		
		p("Choices: ");
		p("\n1. Wala");
		p("\n2. Wala na Wala");
		p("\n3. Wala na Wala na Wala");
		p("\n4. Wala na Wala na Wala na Wala");
		p("\n5. Wala na Wala na Wala na Wala na Wala");
		p("\n6. Wala na Wala na Wala na Wala na Wala na Wala");
		p("\nAnswer: ");
		s("%s", &choice);
		choice = toupper(choice);
		
		if(choice=='W'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;
		}else if(choice=='1'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;
		}else if(choice=='2'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;
		}else if(choice=='3'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;	
		}else if(choice=='4'){
			p("TAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;	
		}else if(choice=='5'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;	
		}else if(choice=='6'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			q2();
			break;	
		}else{
			p("\nENGKKKKKKKKKKKKKK");
			p("\nThat's wrong in many ways");
			p("\nOh!!! Wrong in all ways!");
			
			p("\nEnter any keys to continue.......");
   			getch();
   			q1();
   			break;
		}
	}
	
	
}

void q2(){
	char choice;
	
	while(choice==NULL){
		system("cls");
		printf("=========================================\n");
		printf("=                                       =\n");
		printf("=           SINO GUSTO NI SEAN?         =\n");
		printf("=                                       =\n");
		printf("=========================================\n\n");
		
		p("Choices: ");
		p("\n1. Nicole");
		p("\n2. Nicole Guillen");
		p("\n3. Patricia Nicole Guillen");
		p("\n4. Patricia Nicole S. Guillen");
		p("\n5. Patricia Nicole Sabungan Guillen");
		p("\n6. Her GF(Patrcia Nicole Sabungan Guillen)");
		p("\n7. Her Girlfriend(Patrcia Nicole Sabungan Guillen)");
		p("\nAnswer: ");
		s("%s", &choice);
		choice = toupper(choice);
		
		if(choice=='N'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;
		}else if(choice=='1'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;
		}else if(choice=='2'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;
		}else if(choice=='3'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;	
		}else if(choice=='4'){
			p("TAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;	
		}else if(choice=='5'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;	
		}else if(choice=='6'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;	
		}else if(choice=='7'){
			p("\nTAMA!");
			p("\nEnter any keys to continue.......");
			getch();
			end();
			break;	
		}else{
			p("\nENGKKKKKKKKKKKKKK");
			p("\nThat's wrong in many ways");
			p("\nOh!!! Wrong in all ways!");
			
			p("\nEnter any keys to continue.......");
   			getch();
   			q1();
   			break;
		}
	}
	
}

void end(){
	int kisses,kissed;
	
		system("cls");
		printf("=========================================\n");
		printf("=                                       =\n");
		printf("=           I LOVE YOU DARLING!         =\n");
		printf("=                -ur seaxn              =\n");
		printf("=========================================\n\n");
		
	p("Hi Baby Baby Babes ko!");
	p("\nSorry ha!");
	p("\nSorry!");
	p("\nI love you so much!");
	p("\nI love you so muchhhhhhhhhhhhhhhhhhhhhhhhh!");
	p("\nMahal kita!!");
	p("\nMahal na mahal na mahal na mahal na mahal kita!!");
	p("\nI miss you!!");
	p("\n\nEnter number of kisses: ");
	scanf("%d", &kisses);
	do{
	p("\nmwuah!");
	kissed++;
	}
	while(kissed!=kisses);
}