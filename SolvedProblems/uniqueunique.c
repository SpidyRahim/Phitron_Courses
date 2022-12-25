#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int a[27] = {0};
	int n;
	scanf("%d", &n);
	char str[105];
	scanf("%s", str);
	int count = 0;

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			a[str[i] - 97]++;
		}
	}

	for (int j = 0; j < 27; j++)
	{
		if (a[j] == 1)
			count++;
	}
	printf("%d", count);

	return 0;
}
