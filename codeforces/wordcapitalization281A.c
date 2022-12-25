#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], c[1001];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i <= len; i++)//len porjonto gese karon last e ekta null character ache
    {
        if (i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            printf("%s", s);
        }
    }
}