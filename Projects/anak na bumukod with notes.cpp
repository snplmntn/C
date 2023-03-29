#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>

void process();
void hdg();
void comp();
void detail();

	char sna1[5][25];	
	int sno1[5];
	int qty1[5];
	float up1[5];
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
		
			while(choice!='N'){
			printf("\nWould you like to add more profiles? (Y / N): ");
			scanf("%s", &choice);
			choice = toupper(choice);
			
			switch(choice){
				case 'Y':
					break;
					
				case 'N':
					ln = namez;
					namez == 0;
					comp();	
					break;
					
				default:
					printf("Only enter Y or N eg. N");
				}
				break;
		}
		
		
	}
	
		
	/*
	printf("No. %d", sno1[0]);
	printf("\tName: %s", sna1[0]);
	printf("\tQuantity %d", qty1[0]);
	printf("\tUnit Price %.2f", up1[0]);
	printf("\n");
	printf("No. %d", sno1[1]);
	printf("\tName: %s", sna1[1]);
	printf("\tQuantity %d", qty1[1]);
	printf("\tUnit Price %.2f", up1[1]);
	printf("\n");
	printf("No. %d", sno1[2]);
	printf("\tName: %s", sna1[2]);
	printf("\tQuantity %d", qty1[2]);
	printf("\tUnit Price %.2f", up1[2]);
	printf("\n");
	printf("No. %d", sno1[3]);
	printf("\tName: %s", sna1[3]);
	printf("\tQuantity %d", qty1[3]);
	printf("\tUnit Price %.2f", up1[3]);
	printf("\n");
	printf("No. %d", sno1[4]);
	printf("\tName: %s", sna1[4]);
	printf("\tQuantity %d", qty1[4]);
	printf("\tUnit Price %.2f", up1[4]);			
	*/
	return 0;
}

void process(){

				
//	ewan++;
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
		/*
		sls1[1] = qty1[1] * up1[1];
		sls1[2] = qty1[2] * up1[2];
		sls1[3] = qty1[3] * up1[3];
		sls1[4] = qty1[4] * up1[4];
		*/
		comp1++;
		}
		detail();
}

void detail(){
	int detail1;
	
	do{
		hdg();
		hdg1++;
		break;
	} while(hdg1==0);
	
	while(detail1!=ln){
		printf("%d\t\t%s\t\t%.2f", sno1[detail1], sna1[detail1], sls1[detail1]);
		detail1++;
		printf("\n");
		}
}

	
	/*printf("%d\t\t%s\t\t%.2f", sno1[0], sna1[0], sls1[0]);
	printf("\n%d\t\t%s\t\t%.2f", sno1[1], sna1[1], sls1[1]);
	printf("\n%d\t\t%s\t\t%.2f", sno1[2], sna1[2], sls1[2]);
	printf("\n%d\t\t%s\t\t%.2f", sno1[3], sna1[3], sls1[3]);
	printf("\n%d\t\t%s\t\t%.2f", sno1[4], sna1[4], sls1[4]);
	*/

/*
int main(){
	char names[10][25];
	int namez =0;
	int choice;
	
	while(choice!=2){
	scanf("%s", names[namez]);
	printf(names[0+namez]);
	printf("\n");
	namez++;
	
	if(namez>=5){
		printf("Add more names?");
		scanf("%d", choice);
		
		switch(choice){
			case 1:
				printf("\n");
			case 2:
				break;	
		}
	}	else{
	
	}
	}
	
	return 0;
}
*/