#include<stdio.h>
int main(){
	int a[] = {1,2,3,4} ,i;
	int *p;
	p =&a;
	for(i=0;i<3;i++){
		printf("%d\t",*p);
		p++;
	}
}
