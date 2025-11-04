#include<stdio.h>
int main(){
	
	int pmax;
	int pmin;
	int size,i,min,max;
	int j;
	int m;
	printf("Enter size of an array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements in the array\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(m=0;m<size;m++){
		printf("%d\t",arr[m]);
	}
	min= arr[0];
	max= arr[0];
	for(j=1;j<size;j+=2){
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
	printf("\nMinimum=%d\n",min);
	printf("Maximum=%d",max);
	
}
