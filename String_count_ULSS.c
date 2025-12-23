#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int upper = 0, lower = 0, digit = 0;
    int space = 0, special = 0, words = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] == ' ')
            space++;
        else if (str[i] != '\n')
            special++;
    }

    if (str[0] != ' ' && str[0] != '\n')
        words = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
            words++;
    }

    printf("\nUppercase characters: %d", upper);
    printf("\nLowercase characters: %d", lower);
    printf("\nDigits: %d", digit);
    printf("\nSpaces: %d", space);
    printf("\nWords: %d", words);
    printf("\nSpecial characters: %d", special);

    return 0;
}

