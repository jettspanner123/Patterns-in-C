#include <stdio.h>

int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 0; i < base_number; i++)
    {
        for (int j = 1; j <= base_number; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}