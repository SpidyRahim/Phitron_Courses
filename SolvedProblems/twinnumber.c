#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int diff = b - a;
    int twin = diff / 2;
    printf("%d", twin);
}