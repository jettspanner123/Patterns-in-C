#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    typedef char *pointer;
    pointer number = argv[1];
    int base_number = atoi(number);
    int asciiValue = 65;

    for (int i = 0; i < base_number; i++)
    {
        for (int j = 1; j <= base_number; j++)
        {
            printf("%c", (j + asciiValue) - 1);
        }
        printf("\n");
    }
}