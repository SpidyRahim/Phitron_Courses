#include <stdio.h>

#define MAX_SIZE 10005 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    long long int i, max, min, size;
    long long int n;
    scanf("%lld", &n);
    for (long long int k = 0; k < n; k++)
    {
        /* Input size of the array */
        // printf("Enter size of the array: ");
        scanf("%lld", &size);

        /* Input array elements */
        // printf("Enter elements in the array: ");
        for (i = 0; i < size; i++)
        {
            scanf("%lld", &arr[i]);
        }

        /* Assume first element as maximum and minimum */
        max = arr[0];
        min = arr[0];

        /*
         * Find maximum and minimum in all array elements.
         */
        for (i = 1; i < size; i++)
        {
            /* If current element is greater than max */
            if (arr[i] > max)
            {
                max = arr[i];
            }

            /* If current element is smaller than min */
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        if (min < 0)
        {
            long long int mpro = max * max;
            long long int minpro = min * min;
            long long int maxsum = max + max;
            long long int minsub = min + min;
            printf("%lld", minpro);
            printf(" %lld", mpro);
            printf(" %lld", maxsum);
            printf(" %lld\n", minsub);
        }
        else
        {
            long long int mpro = max * max;
            long long int minpro = min * min;
            long long int maxsum = max + max;
            long long int minsub = min + min;
            printf("%lld", mpro);
            printf(" %lld", minpro);
            printf(" %lld", maxsum);
            printf(" %lld\n", minsub);
        }
    }
    return 0;
}