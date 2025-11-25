#include<stdio.h>
int main(){
	int arr[5],i,j;
	int sum = 0, cE=0,cO=0;
	for(i=0;i<5;i++){
		printf("enter a number\n");
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			cE++;
		}
		else{
			cO++;
		}
		
	}
	printf("Number of even integers= %d\n",cE);
	printf("Number of odd integers= %d",cO);
}
