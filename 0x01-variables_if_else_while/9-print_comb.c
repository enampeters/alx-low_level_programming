#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Using putchar for printing possible combinations of 10 digits
 * Betty style format code
 */

int main(void)
{
	/* Get character to be written */
	int n = 48;

	/*writing to stdout */
	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}

	putchar('\n');

	return (0);
}
