#include <stdio.h>

int main()
{

    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = base_number; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}