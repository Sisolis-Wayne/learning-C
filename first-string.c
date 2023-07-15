#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[6] = "hello";
	char str1[6];

	printf("%s\n", str);

	strncpy(str1, str, 4);

	printf("%s\n", str1);

	return (0);
}
