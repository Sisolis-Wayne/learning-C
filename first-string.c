#include <stdio.h>
#include <string.h>

/**
 * main - this is a function which shows some of
 * the operations on string we have in C language
 *
 * Return: 0 (Always Success)
 */

int main(void)
{
	char str[6] = "hello";
	char newStr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str1[6];
	int m;


	printf("%s\n", str);
	printf("The length of the string str is %lu\n", strlen(str));

	for (m = 0; m < strlen(str); m++)
	{
		printf("%c\n", str[m]);
	}

	strncpy(str1, str, 4);

	printf("%s\n", str1);

	printf("Comparing str1 and str: %d\n", strcmp(str1, str));

	printf("Comparing to a specified length: %d\n", strncmp(str1, str, 4));

	strncat(str1, str, 4);

	printf("Concatenates str onto str1: %s\n", str1);

	return (0);
}
