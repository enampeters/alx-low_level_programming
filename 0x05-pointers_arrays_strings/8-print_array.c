#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: number of array elements to be printed out
 * @a: array elements
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
