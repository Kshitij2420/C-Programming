#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    char b[20];

    printf("Enter a string:\n");
    scanf("%s", a);

    strcpy(b, a);      // copy original string
    strrev(b);         // reverse copied string

    if (strcmp(a, b) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

