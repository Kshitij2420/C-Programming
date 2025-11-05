#include<stdio.h>
int main(){
	int amt;
	int unit;
	printf("Enter units \n");
	scanf("%d",&unit);
	if(unit>0 && unit<50){
		amt = 0;
	}
	else if(unit>=50 && unit<100){
		amt = unit*1;
	}
	 else if(unit>=100 && unit<200){
	 	amt = (100*1)+ (unit- 99)*2; 
	 }
	 else if(unit>=200 && unit<300){
	 	amt = 100*1 + 200*2 + (unit-199)*3;
	 }
	 else if(unit>=300 && unit<400){
	 	amt = 100*1 + 200*2 + 300*3 + (unit-299)*4;
	 }
	 else{
	    amt = 100*1 + 200*2 + 300*3 + 400*4 + (unit-399)*5;
	 }
printf("bill amount = %d",amt);
}
