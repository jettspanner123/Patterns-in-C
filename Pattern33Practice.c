#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    return a > b ? b : a;
}

int main(int length, char **args)
{
    typedef char *pointer;
    pointer number = args[1];
    int base_number = atoi(number);

    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 1; j <= base_number; j++)
        {
            int minValue = min(i, j);
            printf("%d ", minValue);
        }
        for (int j = base_number - 1; j >= 1; j--)
        {
            int minVal = min(i, j);
            printf("%d ", minVal);
        }
        printf("\n");
    }

    for (int i = base_number - 1; i >= 1; i--)
    {
        for (int j = 1; j <= base_number; j++)
        {
            int minValue = min(i, j);
            printf("%d ", minValue);
        }
        for (int j = base_number - 1; j >= 1; j--)
        {
            int minVal = min(i, j);
            printf("%d ", minVal);
        }
        printf("\n");
    }
}