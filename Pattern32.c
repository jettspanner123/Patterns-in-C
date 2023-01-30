#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if (a > b)
        return b;
    return a;
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
            int minVal = min(i, j);
            printf("%d", minVal);
        }
        printf("\n");
    }
}