#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        if (i % 2 == 0)
        {
            for (int k = 1; k <= i * 2 - 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int k = 1; k <= i * 2 - 1; k++)
            {
                printf("^");
            }
            printf("\n");
        }
    }
}