#include <stdio.h>
#include "main.h"

/**
 * main - This program aims to show how to pass array into a
 * function by value and pass array into to a function by reference
 *
 * @func1 - this passes the array into the function by value
 *
 * @func2 - this passes the array into the function by reference
 *
 * Return: 0 (Always success)
 */

int main(void)
{
	int arr[5] = {2, 3, 4, 5, 6};

	func1(arr[3]);
	func2(arr, 5);

	return (0);
}

void func1(int val)
{
	printf("Received value is %d\n", val);
}

void func2(int *ref, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", *(ref + i));
	}
	printf("\n");
}
