//Q8. What is the output of this C code? 
#include<stdio.h>
void main()
{
int a = -5;
int k = (a++, ++a); 
printf("%d", k);
}
