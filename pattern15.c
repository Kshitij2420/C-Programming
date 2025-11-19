#include<stdio.h>

int main()
{
    
    int i,j;
    for(i = 1; i <=5; i++)      
    { 
        for(j = 1; j <=5; j++)   
        {
            if(j <= 5 - i) 
                printf("  ");          
            else if(j <= 5) 
                printf("%d ", j-(5-i));  
            else
                printf("%d ", (5+i)-j);  
        }

        printf("\n");
    }

    return 0;
}
