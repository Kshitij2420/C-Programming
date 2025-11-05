#include <stdio.h>

int main() {
    int unit;
    float amt = 0;

    printf("Enter units consumed: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        amt = 0;
    } 
    else if (unit <= 100) {
        amt = (unit - 50) * 1;
    } 
    else if (unit <= 200) {
        amt = (50 * 0) + (50 * 1) + (unit - 100) * 2;
    } 
    else if (unit <= 300) {
        amt = (50 * 0) + (50 * 1) + (100 * 2) + (unit - 200) * 3;
    } 
    else if (unit <= 400) {
        amt = (50 * 0) + (50 * 1) + (100 * 2) + (100 * 3) + (unit - 300) * 4;
    } 
    else {
        amt = (50 * 0) + (50 * 1) + (100 * 2) + (100 * 3) + (100 * 4) + (unit - 400) * 5;
    }

    printf("Total Bill Amount = Rs. %.2f\n", amt);

    return 0;
}


