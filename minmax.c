#include <stdio.h>

/**
 * main - this is a program that returns the maximum and minimum
 * number in an array of numbers
 *
 * Return: 0 (Always success)
 *
 */

int main(void)
{
	int arr[10];
	int i;
	int min, max;

	for (i = 0; i < 10; i++)
	{
		printf("Enter the number at position %d of the array: ", i);
		scanf("%d", &arr[i]);
	}

	printf("size of the array: %ld\n", sizeof(arr));
	printf("%d\n", arr[5]);

	min = arr[0];
	max = arr[0];

	for (i = 0; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}


	printf("%d\n", min);
	printf("%d\n", max);

	return (0);
}
