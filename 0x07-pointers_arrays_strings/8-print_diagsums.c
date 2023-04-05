#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int mdsum = 0, odsum = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			mdsum += a[i][j];
			odsum += a[i][size - i - 1];
		}
	}
	printf("%d, %d\n", mdsum, odsum);
}
