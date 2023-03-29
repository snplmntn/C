#include<stdio.h>

int main()
{
	//%c for char %s for string %d for int
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("Sum: %d", a+b);
	
	return 0;
}

