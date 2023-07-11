#include <stdio.h>
#define MESSAGE "Well, it has been defined"
#include "main.h"

/**
 * main - a function which prints a message from a variable
 * defined using a preprocessor
 *
 * Return: 0 (Always success)
 */

int main(void)
{
	printf("Here is the message: %s\n", MESSAGE);
	return (0);
}
