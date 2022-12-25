#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int temp1, temp2;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[j] < arr1[i])
            {
                temp1 = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr2[j] > arr2[i])
            {
                temp2 = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp2;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", (arr1[i] - arr2[i]));
    return 0;
}
