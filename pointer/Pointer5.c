#include<stdio.h>
int main(){
	int a[] = {1,2,3,4} ,i;
	int *p;
	p =&a[3];
	for(i=0;i<4;i++){
		printf("%d\t",*p);
		p--;
	}
}
