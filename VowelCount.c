#include <stdio.h>
int main()
{
    char sen[10000], counter = 0;
    // gets(sen);
    fgets(sen, sizeof(sen), stdin);
    // printf("%s", sen);
    for (int i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
            counter++;
    }
    printf("%d ", counter);
}