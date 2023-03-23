#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers from 1
 *
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i = 1;
	long j = 0, k = 1, l;

	while (i < 51)
	{
		l = j + k;
		printf("%lu", l);

		j = k;
		k = l;

		if (i <= 49)
			printf(", ");
		else
			printf("\n");
		i++;
	}

	return (0);
}
