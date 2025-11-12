//What is the output of the below code considering size of short int is 2, char is  1 and int is 4 bytes?
#include<stdio.h> 
int main()
{
short int i = 20; char c = 97;
printf("%d, %d, %d", sizeof(i), sizeof(c), sizeof(c + i)); 
return 0;
}
