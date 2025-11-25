#include<stdio.h>
int main(){
	int arr[5],i,j;
	
	for(i=0;i<5;i++){
		printf("enter a number\n");
		scanf("%d",&arr[i]);
	}
	int temp =0;
	for(i=0;i<5;i++){
	  if(arr[i]<arr[i+1]){
	  	temp = arr[i+1];
	  	arr[i+1] = arr[i];
	  	arr[i] = temp;
	  }
	}
	printf("Second largest = %d",arr[1]);
}

