#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name);
        // fgets(name, sizeof(name), stdin);
        int length = strlen(name); // karon last er ta null value thake tai 1 kom kore nibo
        if (length > 10)
        {
            printf("%c%d%c", name[0], length - 2, name[length - 1]);
        }
        else
        {
            printf("%s", name);
        }
        printf("\n");
    }
    return 0;
    /* int n;
    char s[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int len = strlen(s);
        if (len > 10)
        {
            printf("%c%d%c", s[0], len - 2, s[len - 1]);
        }
        else
        {
            printf("%s", s);
        }
        printf("\n");
    } */
}