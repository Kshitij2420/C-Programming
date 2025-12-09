#include<stdio.h>
int main(){
	int ar[10],i,j; int min;
	for(i=0;i<10;i++){
		printf("enter a number\n");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<9;i++){
		min = i;
		for(j=i+1;j<10;j++)
			if(ar[j]<ar[min]){
				min = j;
			}
			if(min!= i){
				int temp;
				temp = ar[i];
				ar[i] = ar[min];
				ar[min] = temp;
			}
		
	}
	printf("Final OUTPUT\n");
	
	for(i=0;i<10;i++){
		printf("%d\n",ar[i]);
		
	}
}
