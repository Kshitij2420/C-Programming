#include<stdio.h>
int main(){
	int a =10;
	int *b;
	b = &a;
	printf("address of = %u",b);
	printf("address of = %d",*b);
	
}
