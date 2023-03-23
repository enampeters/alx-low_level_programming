#include <stdio.h>

/**
 * main - computes the sum of multiples of 3 or 5
 *
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			j += i;
	}
	printf("%d\n", j);

	return (0);
}
