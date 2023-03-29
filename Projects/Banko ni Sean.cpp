#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

void body();
void choices();
int main();

int mypin, hdg=0,balance=0;
char name[20];

int main()
{
	int pin1,pin,todo;

	
	while(hdg==0){
	printf("WELCOME TO:");
	printf("***SIMPLE ATM Machine***\n");
	hdg+=1;
	}
	
	printf("What do you want to do:\n");
    printf("1. Create an account\n2. Login\n(1/2): ");
    scanf("%d", &todo);
    
    switch(todo){
    	case 1:
    		printf("Enter Name: ");
			scanf("%s", &name);
			printf("Create a 4 digit pin: ");
			scanf("%d", &pin1);
	
			if(pin1<=9999 && pin1>=0000){
			mypin+=pin1;
			break;
			}
			else{
			printf("Invalid PIN!\n");
			main();
			}
    	case 2:
    		break;
    	default:
    	printf("Invalid Choice!");
    	main();
    	break;
	}
	printf("\n\nLogin\n");
	printf("Enter PIN Number: ");   
	scanf("%d", &pin);
    

	if(pin == mypin){
	printf("Hello %s!\n", name);
	printf("%d", balance);
	body();
	}
	else{
	printf("HACKER DETECTED!\nTerminating the program...");	
	}
	
    
return 0;
}

void body(){
	int choices,with,dep;
    
    printf("What do you want to do?\n");
    printf("1. Withdraw\n2. Deposit\n3. Check Balance\n4. Logout\n(1/2/3/4): ");
    scanf("%d", &choices);
    
    switch(choices){
    	case 1:
			printf("Current Balance is %d", details.balance);
    		printf("Amount to be withdrawned: ");
    		scanf("%d",with);
    		
    		if(details.balance<with){
    			printf("Insufficient Balance");
    			break;
			}
			else if(details.balance>=with){
				details.balance-=with;
				printf("Succesfuly withdrawned: %d", with);
				printf("Your new Balance is: %d", details.balance);
				break;
			}
    		
    	case 2:
    		do{
    		printf("Current Balance is: %d",details.balance);
    		printf("Deposit Amount: ");
    		scanf("%d",dep);
			printf("Successfuly added: %d",dep);
			printf("Your new Balance is: %d", balance);			
    		}
    		while(dep<0);
    		break;
    	case 3:
			printf("Current Balance is %d",balance);
		
		case 4:
			main();	
	}
}
