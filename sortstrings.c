#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[10] = "anaconda";
	char str2[10] = "aconda";
	int m, j, p;
	int len1, len2;

	len1 = strlen(str1);
	len2 = strlen(str2);

	printf("%d %d", len1, len2);
	printf("\n");

	if (len1 < len2) 
	{
		j = len2;
	}
	else
	{
		j = len1;
	}

	printf("%d", j);
	printf("\n");

	for (m = 0; m < j; m++)
	{
		if (str1[m] > str2[m])
		{
			p = str1[m] - str2[m];
			printf("%d --- loop %d\n", p, m);
			break;
		}
		if (str1[m] < str2[m])
		{
			p = str1[m] - str2[m];
			printf("%d --- loop %d\n", p, m);
			break;
		}
		if (str1[m] == str2[m])
		{
			if (m == j -1)
			{
				p = str1[m] - str2[m];
				printf("%d --- loop %d\n", p, m);
				break;
			}
		}
	}

	printf("%d\n", strcmp(str1, str2));

	return (0);
}
