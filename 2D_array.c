#include <stdio.h>

/** main - This program prints a 2-D array
 *
 * Return: 0 (Always succes)
 */

int main(void)
{
	int row = 3;
	int col = 3;
	int arr[row][col];
	int i,j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("Enter the number in row %d column %d\n", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < row; i++)
	{

		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("%d, ", arr[i][j]);
		}
	}


	printf("\n");
}
