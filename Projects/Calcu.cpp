#include<stdio.h>
int main()
{
	char sign,ans;
	int num1,num2,ans1;
	
	printf("Simple Calculator");
	printf("\nEnter 1st Number: ");
	scanf("%d", &num1);	
	printf("Enter 2nd Number: ");
	scanf("%d", &num2);
	printf("Enter Operator Add(+) Minus(-) Times(*) Divide(/): ");
	scanf("%s", &sign);
	switch(sign)
{
		case '+':
		printf("\nThe sum is: %d", num1 + num2);
		break;

		case '-':
		printf("\nThe difference is: %d", num1 - num2);
		break;

		case '*':
		printf("\nThe product is: %d", num1 * num2);
		break;

		case '/':
		printf("\nThe quotient is: %d", num1 / num2);
		break;									
	
	default:
	printf("\nInvalid Operator!");
	printf("\nWould you like to Continue? (Y/N): ");
	scanf("%s", &ans);
	if(ans=='Y')
	{
		printf("\n\n");
		return main();
	}
	else if(ans=='N')
	{
		break;
	}
}
	printf("\n\nWould you like to Continue? (Y/N): ");
	scanf("%s", &ans);
	if(ans=='Y')
	{
		return main();
	}
	else if(ans=='N')
	{
	}
	return 0;
}