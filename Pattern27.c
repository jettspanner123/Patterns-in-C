
#include <stdio.h>

int main()
{
    int base_number;
    scanf("%d", &base_number);

    int starNumber = (base_number / 2) + 1;
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 1; j <= base_number; j++)
        {
            if (i == starNumber || j == starNumber)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}