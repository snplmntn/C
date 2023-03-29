#include<stdio.h>
#include<stdlib.h>
void detail();
int main(){
	detail();
}
void detail(){
	int detail1, page, page2, page3, ln=6;
	
	while(detail1!=ln){
		printf("Sean");
		detail1++;
		printf("\n");
		
		if(detail1%5==0){
			break;
		}
		}
		
		if(detail1<=5){
			page = 1;
		}	else if(page>=6 && page<=10){
			page2 = 2;
		}	else if(page>=11 && page<=15){
			page3 = 3;
		}
		
		printf("\n\nCurrently in Page %d", page);
		printf("\nPages: %d %d %d", page, page2, page3);
}