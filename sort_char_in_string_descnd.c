#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30];
	int m, j, chTemp, len;

	printf("Enter the string: ");
	scanf("%s", str);

	len = strlen(str);

	for (m = 0; m < len; m++)
	{
		for (j = 0; j < (len - 1); j++)
		{
			if (str[j] < str[j + 1])
			{
				chTemp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = chTemp;
			}
		}
	}

	printf("This is the sorted string: %s\n", str);

	return (0);
}
