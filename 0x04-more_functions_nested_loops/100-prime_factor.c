#include <stdio.h>

/**
 * main - finds the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
	long p = 612852475143, f;

	while (f < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}
		for (f = 3; f < (p / 2); f += 2)
		{
			if ((p % f) == 0)
				p /= f;
		}
	}
	printf("%ld\n", p);

	return (0);
}
