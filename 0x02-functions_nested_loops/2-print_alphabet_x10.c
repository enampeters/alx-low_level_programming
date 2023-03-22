#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of the alphabets in lowercase
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}
