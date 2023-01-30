#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int chValue = 65;
    for (int i = base_number; i > 0; i--)
    {
        for (int j = chValue; j < chValue + i; j++)
            printf("%c", j);
        printf("\n");
    }
}