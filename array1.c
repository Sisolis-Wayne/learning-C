#include <stdio.h>

/**
 * main - this is a program that prints the elements of
 * an array of integers
 *
 * Return: 0 (Always success)
 */

int main(void)
{
	int arr[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("Enter the value of the array at position %d: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Printing the array in normal order\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return (0);
}
