#include<stdio.h>
#include<string.h>
int main(){
	char a[23];
	char b[23];
	
		while(strcmp(a,b) !=0){
		
		printf("Enter Name: ");
		scanf("%s", &a);
		printf("Enter Computer name: ");
		scanf("%s", &b);
		
	if(strcmp(a,b) !=0){
		printf("\nPlayer and Computer names must be different!\n");
		main();
	}else{
		break;
	}
	}
}