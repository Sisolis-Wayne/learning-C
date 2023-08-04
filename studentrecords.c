#include <stdio.h>
#include <string.h>

struct student
{
	char name[30];
	int age;
	int roll_number;
};

int main(void)
{
	int m, j, n;
	int arr[20];
	int recTemp;
	struct student records[20];

	printf("Enter the desired number of students: ");
	scanf("%d", &j);

	for (m = 0; m < j; m++)
	{
		printf("Name: ");
		scanf("%s", records[m].name);

		printf("Age: ");
		scanf("%d", &records[m].age);

		printf("Roll Number: ");
		scanf("%d", &records[m].roll_number);
	}

	for (m = 0; m < j; m++)
	{
		printf("Name: %s | Age: %d | Roll Number: %d\n", records[m].name, records[m].age, records[m].roll_number);
	}

	for (m = 0; m < j; m++)
	{
		printf("%d, ", records[m].roll_number);
	}
	printf("\n");

	for (m = 0; m < j; m++)
	{
		arr[m] = records[m].roll_number;
	}

	for (m = 0; m < j; m++)
	{
		printf("%d, ", arr[m]);
	}
	printf("\n");

	for (m = 0; m < j; m++)
	{
		for (n = 0; n < (j - 1); n++)
		{
			if (arr[n] > arr[n + 1])
			{
				recTemp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = recTemp;
			}
		}
	}

	for (m = 0; m < j; m++)
	{
		printf("%d, ", arr[m]);
	}
	printf("\n");

	for (m = 0; m < j; m++)
	{
		for (n = 0; n < j; n++)
		{
			if (records[n].roll_number == arr[m])
			{
				printf("Name: %s | Age: %d | Roll Number: %d\n", records[n].name, records[n].age, records[n].roll_number);
			}
		}
	}

	return (0);
}
