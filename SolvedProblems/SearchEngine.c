#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {

        int arr[1010];
        int size, i, toSearch, found;

        scanf("%d", &size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

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