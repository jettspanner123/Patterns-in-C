#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int value = 64;
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = value + i; j <= value + base_number; j++)
            printf("%c", j);
        printf("\n");
    }
}