#include<stdio.h>
int main(){
	int ar[10],i,j;
	for(i=0;i<10;i++){
		printf("enter a number\n");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++){
		
		for(j=0;j<10-i-1;j++){
			if(ar[j]>ar[j+1]){
				int temp =0;
				temp = ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("Final OUTPUT\n");
	
	for(i=0;i<10;i++){
		printf("%d\n",ar[i]);
		
	}
}
