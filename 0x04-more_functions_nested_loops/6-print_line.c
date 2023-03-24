#include "main.h"

/**
 * print_line - print _ n times to draw a straight line.
 *
 * @n: the number of times _ will be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
