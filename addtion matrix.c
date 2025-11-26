//Matrix Addition
#include<stdio.h>
int main(){
	int a[3][3],i,j,b[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter a number: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter a number for second matrix ");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter a number: ");
			scanf("%d",&b[i][j]);
		}
	}
	int c[3][3];
	
			for(i=0;i<3;i++){
			printf("\n");
		for(j=0;j<3;j++){
			c[i][j]= a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
	}
}
