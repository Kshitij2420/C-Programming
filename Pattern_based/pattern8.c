#include<stdio.h>
int main(){
	int i , j, a=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){

			if(a%2==0)
			{
				printf("0\t");
			}
			else{
				printf("1\t");
			}
			a=a+1;
		}
		printf("\n");
	}
}

//1
//0       1
//0       1       0
//1       0       1       0
//1       0       1       0       1
