#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{

    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 1; i <= base_number; i++)
    {
        for (int j = (base_number - i) + 1; j >= 1; j--)
            printf("*");
        for (int k = 1; k <= base_number - 1; k++)
            printf("*");
        printf("\n");
    }
}