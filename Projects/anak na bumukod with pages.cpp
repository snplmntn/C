#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
//sean sm dept store flowchart ni ma'am
void hdg();
void comp();
void detail();

	char sna1[10][25];	
	int sno1[10];
	int qty1[10];
	float up1[10];
	float sls1[10];
											
	int namez = 0;
	int ln = 0;
	int hdg1 =0 ;


int main(){
	char choice;
	
	printf("INPUT\n");
	while(choice!='N'){
		printf("\nEnter Employee Number: ");
		scanf("%d", &sno1[namez]);
		
		printf("Enter Name: ");
		scanf("%s", &sna1[namez]);
		
		printf("Enter Quantity: ");
		scanf("%d", &qty1[namez]);
		
		printf("Enter Unit Price: ");
		scanf("%f", &up1[namez]);
		namez++;
		
			while(choice!='N' || choice!='Y'){
			printf("\nWould you like to add more profiles? (Y / N): ");
			scanf("%s", &choice);
			choice = toupper(choice);
			
			if(choice=='Y'){
				break;
			}	else if(choice=='N'){
					ln = namez;
					namez == 0;
					comp();	
					break;				
			}	else{
					printf("Only enter Y or N eg. N");
				}
				
		}
	
	}
	return 0;
}

void hdg(){
	system("cls");
	printf("\n\t     SM Dept. Store\n\n");
	printf("Salesman\tSalesman\tSales\n");
	printf("Number\t\tName\n");
	
}

void comp(){
	int comp1 = 0;
	while(comp1!=ln){
		sls1[comp1] = qty1[comp1] * up1[comp1];
		comp1++;
		}
		detail();
}

void detail(){
	int detail1, page, page2, page3;
	
	do{
		hdg();
		hdg1++;
		break;
	} while(hdg1==0);
	
	while(detail1!=ln){
		printf("%d\t\t%s\t\t%.2f", sno1[detail1], sna1[detail1], sls1[detail1]);
		detail1++;
		printf("\n");
		
		if(detail1%5==0){
			break;
		}
		}
		
		if(detail1<=5){
			page = 1;
		}	else if(page>=6 && page<=10){
			page2 = 2;
		}	else if(page>=11 && page<=15){
			page3 = 3;
		}
		
		printf("\n\nCurrently in Page %d", page);
		printf("\nPages: %d %d %d", page)
}