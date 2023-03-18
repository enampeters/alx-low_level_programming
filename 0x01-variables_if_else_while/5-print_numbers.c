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
	/* Get numbers to be written */
	int n = 0;

	/* Write character to stdout */
	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
