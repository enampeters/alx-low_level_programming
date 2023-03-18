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
	char alph = 'a';

	/* Write character to stdout */
	for (alph = 'a'; alph <= 'z'; alph++)
		if (alph != 'e' && alph !='q')
			putchar(alph);
	putchar('\n');

	return (0);
}
