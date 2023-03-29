#include<stdio.h>
#include<stdlib.h>
void compute();
int a,b;

int main()
{
	scanf("%d", &a);
	scanf("%d", &b);
	compute();
	return 0;
}

void compute()
{
	printf("%d", a+=b);
}