#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Using putchar for printing possible combinations of 2 digits from 00 to 99
 * Betty style format code
 */

int main(void)
{
	/* Get character to be written */
	int n, m;

	/*writing to stdout */
	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (n == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
