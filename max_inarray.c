#include<stdio.h>
int main(){
	int arr[5],i,j;
	int max=0;
	for(i=0;i<5;i++){
		printf("enter a number\n");
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max = arr[i];
		}
		
	}
	printf("Maximum in array = %d",max);
	
	}
