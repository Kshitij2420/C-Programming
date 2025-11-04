#include<stdio.h>
int main(){
	int arr[10];
	printf("enter elements in an array");
	int i,j,temp=0 ;
	for(i=0;i<=9;i++){
		scanf("%d",&arr[i]);
	}
	temp = arr[0];
	for(j=0;j<=9;j++){
		if(arr[i]<temp){
			arr[i] = temp;
		}
	}
	printf("largest element in this array is = %d",temp);
	return 0;
}
