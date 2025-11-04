#include<stdio.h>
int main(){
	
	int l=0, r=8;
	int i;
	int x;
	int flag = 0;
	int arr[9];
	int mid;
	
	printf("Enter elements in the array\n");
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	//In binary Search the element must be entered in definite order
	printf("Enter a number to be searched\n");
	scanf("%d",&x);
	mid = ((l+r)/2);
	while(l<r){
		if(arr[mid]==x){
			flag = 1;
			break;
		}
		else if(arr[mid]<x){
			l=mid +1;
		}
		else{
			r=mid-1;
		}
	}
	if(flag==1){
		printf("Number found");
	}
	else{
		printf("Number found");
	}
}
