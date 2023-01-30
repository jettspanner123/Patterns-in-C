#include <stdlib.h>
#include <stdio.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);
    int alphabet = 64;
    for (int i = 1; i <= base_number; i++)
    {
        for (int a = 1; a <= base_number - i; a++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%c", alphabet + j);
        for (int k = 1; k < i; k++)
            printf("%c", alphabet + k + 2);

        printf("\n");
    }
}