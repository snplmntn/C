#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

void hdg();
void create();
void login();


typedef struct account{
	char name[20];
	char pin[4];
}account;

int main(){
	char option;
	
	while(option!='0'){
		
		system("cls");
		hdg();
		printf("Welcome to Sean's Bank!\n\n\n");
		
		printf("1. Create an Account\n");
		printf("2. Login\n");
		printf("0. Exit\n\n\n");
		printf("Enter your Option: ");
		scanf("%c", &option);
		
		switch(option){
			case '1':
				create();
				break;
				
			case '2':
				login();
				break;
				
			case '0':
				break;
				
			default:
				printf("\nInvalid option!");
				option = '\0';				
		}
	}
	
	
	return 0;
}

void hdg(){
	printf("=========================================\n");
	printf("=                                       =\n");
	printf("=               SIMPLE BANK             =\n");
	printf("=                                       =\n");
	printf("=========================================\n\n");
}

void create(){
   	FILE *fileOne = fopen("bankdata.bin", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }
	
	char pin[4];
	
    account details;

    system("cls");

    printf("\t\t\t====== Create Bank Account ======\n");

    printf("\n\t\t\tEnter Name : ");
    getchar();
    gets(details.name);
    
    while(true){
    printf("\t\t\tEnter 4 Digit PIN : ");
    scanf("%s", details.pin);  
    
    if(pin[4]!='\0'){
    	printf("\n\t\t\tInvalid PIN!\n\n");
    	details.pin = NULL;
	}else{
		break;
	}
	}

    fwrite(&details, sizeof(details), 1, fileOne);
    
    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();
	    
    fclose(fileOne);	
    
}
void login(){
    FILE *fileOne = fopen("studentInfo.bin", "rb");
	
	int flag;
	char name[20], pin[10];
	
	account details;
	
    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }	
    
        system("cls");
        printf("\t\t\t\t================= LOGIN ================\n");
        
        printf("\n\n\t\t\tEnter NAME: ");
        getchar();
        gets(name);
        printf("\n\n\t\t\tEnter PIN: ");
        getchar();
        gets(pin);
        
        while (fread(&details, sizeof(details), 1, fileOne) == 1)
        {
            if (strcmp(details.name, name) == 0 && strcmp(details.pin, pin) == 0)
            {
                flag++;
                printf("\n\t\t\ Name : %s\n\t\t\tPIN: \n", details.name, details.pin);
            }
        }
        if (flag == 0)
        {
            printf("\n\t\t\tBank Account Not Found");
        }
        
    fclose(fileOne);

    printf("\n\n\n\t\t\tEnter any keys to continue.......");
    getch();    		
}