//Write a C program to determine the roots of quadratic equation.
#include<stdio.h>
#include <math.h>
int main(){
	float d=0;
	int b,a,c;
	printf("Enter the coffecient of x square \n ");
	scanf("%d",&a); 
	printf("Enter the coffecient of x \n");
	scanf("%d",&b);
	printf("Enter the constant number from the quadratic equation \n");
	scanf("%d",&c);
	printf("Roots of the equation \n ");
	d= sqrt((b*b)-(4*a*c));
	printf("%f\n",d);
	// Condition for Discriminant i.e to define the nature of root
	if(d>0){
		printf("The Roots Are Real and Distinct");
	}
	else if(d==0){
		printf("The Roots Are Real And Equal");
	}
	else {
		printf("The Roots Are Complex");
	}
	return 0;
	

}
