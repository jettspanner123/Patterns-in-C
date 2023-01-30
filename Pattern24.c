#include <stdio.h>
#include <stdlib.h>

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    int pointerNumber = 1;
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", pointerNumber);
            pointerNumber++;
        }
        printf("\n");
    }
}