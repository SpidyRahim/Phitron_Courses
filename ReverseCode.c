#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[100000];
        scanf("%s", &str);
        int length = strlen(str);
        for (int j = length - 1; j >= 0; j--)
        {
            printf("%c", str[j] + 16);
        }
        printf("\n");
    }
}