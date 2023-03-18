#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Using putchar to print all base 16 digits in small case
 * Betty style format code
 */

int main(void)
{
	/* Get character to be written */
	char n = '0';

	/* Write character to stdout */
	for (n = '0'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
