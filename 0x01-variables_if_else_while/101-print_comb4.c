#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Using putchar for printing possible different combinations of three digits
 * Betty style format code
 */

int main(void)
{
	/* Get character to be written */
	int n, m, p;

	/*writing to stdout */
	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((p % 10) + '0');

				if (n == 7 && m == 8 && p == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
