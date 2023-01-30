#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int character = 69;
    for (int i = 0; i < base_number; i++)
    {
        for (int j = character - i; j >= 65; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}