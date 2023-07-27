#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char str[20];
	int m;
	int len, end;

	scanf("%s", str);
	len = strlen(str);
	end = len - 1;
	
	for (m = 0; m < len; m++)
	{
		// printf("%c", str[4-m]);
		if (str[m] != str[end-m])
		{
			printf("string is not a palindrome");
			break;
		}
		else
		{
			printf("string is a palindrome");
			break;
		}
	}

	printf("\n");

	return (0);
}
