#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 0; i < base_number; i++)
    {
        for (int j = 0; j < base_number; j++)
        {
            if (i == 0 || j == 0 || j == base_number - 1 || i == base_number - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}