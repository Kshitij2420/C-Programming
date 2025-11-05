#include<stdio.h>
int main(){
	int ch;
	printf("enter a number");
	scanf("%d",&ch);
	switch(ch){
		default:
			printf("default");
			break;
		case 1:
			printf("1");
		case 2:
			printf("2");
		
	}
}
