#include <stdio.h>

int main()
{
    int base_number;
    printf("Enter number ");
    scanf("%d", &base_number);
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 0; j < base_number; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}