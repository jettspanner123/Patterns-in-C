#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 1; j <= base_number - i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int l = 1; l < i; l++)
            printf("%d", l + 2);
        printf("\n");
    }
    return 0;
}