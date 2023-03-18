#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Using putchar for printing only one character at a time
 * Betty style format code
 */

int main(void)
{
	/* Get character to be written */
	char n = '0';

	/* Write character to stdout */
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
