#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    typedef char *pointer;
    pointer number = argv[1];
    int base_number = atoi(number);
    for (int i = 0; i < base_number; i++)
    {
        for (int j = 0; j < base_number; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}