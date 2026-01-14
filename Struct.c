#include<stdio.h>
struct abc{
	char name[2];
	int percent;
	char city[2];
}r;
int main(){
printf("Enter a name\n");
scanf("%s",r.name);
printf("Enter a percentage \n");
scanf("%d",&r.percent);
printf("Enter a city \n");
scanf("%s",&r.city);
printf("\n Name \t Percentage \t city \n");
printf("%s \t %d \t %s",r.name,r.percent,r.city);

}
