#include <stdio.h>

void RofMaxAndMin(int arr[], int *min, int *max) 
{
	int i;
    *min = *max = arr[0];  

    for( i = 1; i < 10; i++) 
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() 
{
    int arr[10], max, min;
    int i;
    printf("Enter 10 array elements:\n");
    for ( i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    RofMaxAndMin(arr, &min, &max);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

