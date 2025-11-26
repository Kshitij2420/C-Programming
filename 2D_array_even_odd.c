#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter a number: ");
			scanf("%d",&a[i][j]);
		}
	}
//		printf("for loop ends");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]%2==0){
					a[i][j]=0;
				}
			}
		}
		
		for(i=0;i<3;i++){
			printf("\n");
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
			
		}
	}

}
