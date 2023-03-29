#include <stdio.h>

// arguments


int s1(int num1)
{
    num1 = num1 / 2;
}

int main()
{
	int sean;
	
	printf("Enter Number to be divided by 2: ");
 	scanf("%d", &sean);
    printf("%d\n", sean);
	sean = s1(sean);
	printf("Answer: %d", sean);
    return 0;
}