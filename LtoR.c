/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        int low, high, i, flag;
        // printf("Enter two numbers(intervals): ");
        scanf("%d %d", &low, &high);
        // printf("Prime numbers between %d and %d are: ", low, high);

        // iteration until low is not equal to high
        while (low < high)
        {
            flag = 0;

            // ignore numbers less than 2
            if (low <= 1)
            {
                ++low;
                continue;
            }

            // if low is a non-prime number, flag will be 1
            for (i = 2; i <= low / 2; ++i)
            {

                if (low % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                printf("%d ", low);

            // to check prime for the next number
            // increase low by 1
            ++low;
        }
        printf("\n");
    }

    return 0;
}*/
// C program to find the prime numbers
// between a given interval

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        int a, b, i, j, flag;

        scanf("%d", &a);

        scanf("%d", &b);

        for (i = a; i <= b; i++)
        {

            if (i == 0)
                continue;

            flag = 1;

            for (j = 2; j <= i / 2; ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}