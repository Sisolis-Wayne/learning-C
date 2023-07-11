#include <stdio.h>

/**
 * main - this program prints file name, date,
 * time, line and standardized output (when the code is
 * compiled) using predefined macros
 *
 */

void main(void)
{
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
	printf("ANSI: %d\n", __STDC__);
}
