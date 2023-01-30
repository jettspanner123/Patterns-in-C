#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 0; i < base_number; i++)
    {
        for (int j = base_number; j >= base_number - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}