#include<stdio.h>
int main(){
	int arr[9];
	int ar[9];
	int i,j ;
	int c;
	int h=8,l=0;
	printf("Enter elements in the array\n");
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	for(j=0;j<9;j++){
		if(h>=l){
			if(arr[j]>0){
				ar[h] = arr[j];
				 --h;
			}
			else{
				ar[l] = arr[j];
				++l;
			}
			
		}
	}
		printf("Enters are: \n");
	for(c=0;c<9;c++){
		printf("%d\n",ar[c]);
	}
}
