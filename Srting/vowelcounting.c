#include <stdio.h>
int main()
{
    char str[1000000];
    // int counter = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'C' || str[i] == 'H' || str[i] == 'A' || str[i] == 'M' || str[i] == 'P' || str[i] == 'I' || str[i] == 'O' || str[i] == 'N' || str[i] == 'S')
        {
            printf("Yes");
        }
        else
            printf("No");
    }
    //   printf("%d", counter);
}