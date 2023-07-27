#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[10] = "ondoo";
	char str2[10] = "ondoa";
	int len1, len2;

	// len1 = strlen(str1);
	// len2 = strlen(str2);

	// printf("%d & %d", len1, len2);

// 	printf("%d,,,", (str1[4] - str2[4]));
	if (str1[4] < str2[4])
	{
		printf("%d,,,", (str1[4] - str2[4]));
	}
	printf("\n");

	// printf("comparing str1 and str2: %d", strcmp(str1, str2));

	printf("\n");

	return (0);
}
