#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int temp1, temp2;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp1 = a[i];
                a[i] = a[j];
                a[j] = temp1;
            }
        }
    printf("%d ",a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] > b[i])
            {
                temp2 = b[i];
                b[i] = b[j];
                b[j] = temp2;
            }
        }
    printf("%d ",b[i]);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", (a[i] - b[i]));
    return 0;
}
