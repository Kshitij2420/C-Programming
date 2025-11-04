#include<stdio.h>
int main(){
	
	int pmax, pmin;
	int i,min,max;
	int j;
	//printf("Enter size of an array\n");
	int arr[9];
	printf("Enter elements in the array\n");
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	min= arr[0];
	max= arr[0];
	for(j=1;j<9;j+=2){
		if(arr[j]>arr[j+1]){
			pmax = arr[j];	pmin = arr[j+1];
		}
		else{
			pmin = arr[j]; 	pmax = arr[j+1];
		}
		if(pmax>max){
			max = pmax;
		}
		if(pmin<min){
			min = pmin;
		}
		
	}
	printf("Minimum=%d\n",min);
	printf("Maximum=%d",max);
	
}
