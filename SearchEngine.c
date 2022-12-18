#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {

        int arr[1010];
        int size, i, toSearch, found;

        // printf("Enter size of array: ");
        scanf("%d", &size);

        // printf("Enter elements in array: ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        // printf("\nEnter element to search: ");
        scanf("%d", &toSearch);

        found = 0;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == toSearch)
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            printf("Case %d: %d\n", j, i + 1);
        }
        else
        {
            printf("Case %d: Not Found\n", j, toSearch);
        }
    }

    return 0;
}