#include<stdio.h>
int main(){
	int arr[10],flag=0;
	int n; 
	int i,j;
	printf("Enter element in array \n");
		for(i=0;i<=9;i++){
		scanf("%d",&arr[i]);
	}
printf("Enter element to be search in array \n");
scanf("%d",&n);
for(j=0;j<=9;j++){
		if(arr[j]==n){
			flag=1;	break;
			}
			}
		
			if(flag==1){
				printf("Number found at index =%d",j);
		
		}
		else{
			printf("Number not found");
		}
	
			
			
	return 0;

}
