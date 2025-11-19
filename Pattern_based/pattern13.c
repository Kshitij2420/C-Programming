#include<stdio.h>
int main(){
	int i ,j,a=6;
	int i1,j2;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf("%d",--a);
		}
		a=6;
		printf("\n");
	}
    a=5;
	for(i1=2;i1<=5;i1++){
		for(j2=i1;j2>=1;j2--){
			printf("%d",a--);
		}
		a=5;
		printf("\n");
	}
}
