#include <stdio.h>

/**
 * main - prints the sum of even valued fibonacci terms less than 4000000
 *
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	unsigned long j = 0, k = 1, l;
	float m;

	while (1)
	{
		l = j + k;

		if (l > 4000000)
			break;

		if ((l % 2) == 0)
			m += l;

		j = k;
		k = l;
	}
	printf("%.0f\n", m);

	return (0);
}
