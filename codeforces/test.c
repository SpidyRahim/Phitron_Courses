#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char string[1005];
    scanf("%s",string);
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        string[i] = tolower(string[i]);
    }
    if (strstr(string,"champions")!=NULL)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    } 
}
