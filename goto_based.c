#include<stdio.h>
int main(){
	goto abc;
	printf("A");
	printf("B");
	abc:
		printf("C");
}
