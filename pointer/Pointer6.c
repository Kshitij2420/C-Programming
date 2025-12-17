//DMA programming
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n , s=0,i;
	int *a;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("enter a number\n");
		scanf("%d",a+i);
		s = s+ *(a+i);
	}
	printf("the sum is = %d",s);
	}

