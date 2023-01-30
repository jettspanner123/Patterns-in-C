#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}
int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = base_number; i >= 1; i--)
    {
        for (int j = base_number; j >= 1; j--)
        {
            printf("%d ", max(i, j));
        }
        for (int k = 2; k <= base_number; k++)
        {
            printf("%d ", max(i, k));
        }
        printf("\n");
    }

    for (int i = 2; i <= base_number; i++)
    {
        for (int j = base_number; j >= 1; j--)
        {
            printf("%d ", max(i, j));
        }
        for (int k = 2; k <= base_number; k++)
        {
            printf("%d ", max(i, k));
        }
        printf("\n");
    }
}