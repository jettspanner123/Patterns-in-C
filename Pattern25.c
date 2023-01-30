#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 1; i <= base_number; i++)
    {
        int printValue = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}