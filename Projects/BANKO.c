#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

typedef struct account{
	char name[20];
	char pin[5];
	int balance;
}account;

	int cbalance;

void hdg();
void create();
void login();
void all();
void body();

int main(){
	char option;
	
	while(option!='0'){
		
		system("cls");
		hdg();
		printf("Welcome to Sean's Bank!\n\n\n");
		
		printf("1. Create an Account\n");
		printf("2. Login\n");
		printf("3. HACK\n");
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
			
			case '3':
				all();
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
	
	int pin,bal;
    account details;

    system("cls");

    printf("\t\t\t====== Create Bank Account ======\n");

    printf("\n\t\t\tEnter Name : ");
    getchar();
    gets(details.name);
    
    while(1){
    printf("\t\t\tEnter 4 Digit PIN : ");
    scanf("%s", &details.pin);
    
    if(details.pin[4]!='\0'){
    	printf("\n\t\t\tInvalid PIN!\n\n");

	}else{
		pin++;
		break;
	}
	}
	
	while(1){
	printf("\t\t\tEnter Balance : ");
    scanf("%d", &details.balance);
    
    if(details.balance < 0){
    	printf("\n\t\t\tInvalid Balance!\n\n");
    	
	}else{
		bal++;
		break;
	}
	}

    fwrite(&details, sizeof(details), 1, fileOne);
    
    printf("%s\n", details.name);
    printf("%s\n", details.pin);
    printf("%d", details.balance);
    
    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();
	    
    fclose(fileOne);	
}
void login(){
    FILE *fileOne = fopen("bankdata.bin", "rb");
    FILE *temp = fopen("temp.bin", "wb");
	
	int flag, tbalance;
	char nm[20];
	char pn[20];
	
	account details, cache;
	
    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\tError !\n");
    }	
    
        system("cls");
        printf("\t\t\t\t================= LOGIN ================\n");
        
        printf("\n\n\t\t\tEnter PIN: ");
        getchar();
		gets(pn);
        
        while (fread(&details, sizeof(details), 1, fileOne) == 1)
        {
            if (strcmp(details.pin, pn) == 0 )
//            && (details.pin, pin) == 0
            {
                flag++;
                printf("\n\t\t\tWelcome back %s glad to have you back!\n\t\t\tBalance: %d\n", details.name, details.balance);
                cache.balance = details.balance;
                
    int choices,with,dep;
    
    printf("What do you want to do?\n");
    printf("1. Withdraw\n2. Deposit\n3. Check Balance\n4. Logout\n(1/2/3/4): ");
    scanf("%d", &choices);
    
    switch(choices){
    	case 1:
			printf("Current Balance is %d", cache.balance);
    		printf("Amount to be withdrawned: ");
    		scanf("%d", &with);
    		
    		if(cache.balance<with){
    			printf("Insufficient Balance");
    			break;
			}
			else if(cache.balance>=with){
				details.balance = cache.balance - with;
				printf("Succesfuly withdrawned: %d", with);
				printf("Your new Balance is: %d", details.balance);
				fwrite(&details, sizeof(details), 1, fileOne);
				break;
			}
    		
    	case 2:
    		do{
    		printf("Current Balance is: %d",details.balance);
    		printf("Deposit Amount: ");
    		scanf("%d",dep);
			printf("Successfuly added: %d",dep);
			printf("Your new Balance is: %d", details.balance);			
    		}
    		while(dep<0);
    		break;
    	case 3:
			printf("Current Balance is %d",details.balance);
		
		case 4:
			main();	
	}

                
            }
        }
        if (flag == 0)
        {
            printf("\n\n\t\t\tBank Account Not Found");
        }
        
    fclose(fileOne);

    printf("\n\n\n\t\t\tEnter any keys to continue.......");
    getch();    		
}

void all(){
	FILE *fileOne = fopen("bankdata.bin", "rb");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    account details;
    
    system("cls");

    printf("\t\t\t\t====== All Students Information ======\n");

    printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Address", "Contact", "CGPA");
    printf("\t\t----------------------------------------------------------------------------------------");

    while (fread(&details, sizeof(details), 1, fileOne) == 1)
    {
        printf("\n\t\t\tName : %s\t\t\tPIN: %s\t\t\tBalance: %d\n", details.name, details.pin, details.balance);
    }

    printf("\n\n\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);    
}

void body(){
	FILE *fileOne = fopen("bankdata.bin", "rb");
	FILE *temp = fopen("temp.bin", "wb");

    if (fileOne == NULL || temp == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    account details, cache;
    
	int choices,with,dep;
    
    
    
    printf("What do you want to do?\n");
    printf("1. Withdraw\n2. Deposit\n3. Check Balance\n4. Logout\n(1/2/3/4): ");
    scanf("%d", &choices);
    
    switch(choices){
    	case 1:
			printf("Current Balance is %d", cache.balance);
    		printf("Amount to be withdrawned: ");
    		scanf("%d", &with);
    		
    		if(cache.balance<with){
    			printf("Insufficient Balance");
    			break;
			}
			else if(cache.balance>=with){
				cache.balance - with;
				printf("Succesfuly withdrawned: %d", with);
				printf("Your new Balance is: %d", cache.balance);
				details.balance = cache.balance;
				fwrite(&details, sizeof(details), 1, fileOne);
				printf("Your new Balance is: %d", details.balance);
				break;
			}
    		
    	case 2:
    		do{
    		printf("Current Balance is: %d",details.balance);
    		printf("Deposit Amount: ");
    		scanf("%d",dep);
			printf("Successfuly added: %d",dep);
			printf("Your new Balance is: %d", details.balance);			
    		}
    		while(dep<0);
    		break;
    	case 3:
			printf("Current Balance is %d",details.balance);
		
		case 4:
			main();	
	}
}