#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//time.h header for time

int main() {
	int number;
	int lower = 1, upper = 3;
	srand(time(NULL));
	
//	number = rand() % 3;//0-2
	number = (rand() % (upper-lower+1)) + lower;
	printf("%d\n", number);
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	
	
	return 0;
}