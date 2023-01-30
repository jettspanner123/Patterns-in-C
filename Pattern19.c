#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int charValue = 69;
    for (int i = 0; i < base_number; i++)
    {
        for (int j = charValue; j >= charValue - i; j--)
            printf("%c", j);
        printf("\n");
    }
}