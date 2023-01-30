#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    int asiiValue = 65;
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);
    for (int i = 0; i < base_number; i++)
    {
        for (int j = asiiValue + i; j >= asiiValue; j--)
            printf("%c", j);
        printf("\n");
    }
}