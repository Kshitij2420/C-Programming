#include<stdio.h>
#include<string.h>
int main(){
	char a[5][10];
	int i , j ;
	for(i=0;i<5;i++){
		printf("Enter a String\n");
		scanf("%s",a[i]);
	}
		printf("---------------------------\n");
		printf("Before Sorting\n");
	for(i=0;i<5;i++){
		printf("%s\n",a[i]);
	}
	printf("---------------------------");
	for(i=0;i<5;i++){
		for(j=0;j<5-i-1;j++){
			if(strcmp(a[j],a[j+1])>0){
				char t[20];
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("---------------------------\n");
	printf("After Sorting\n");
	for(i=0;i<5;i++){
		printf("%s\n",a[i]);
	}
	
}
