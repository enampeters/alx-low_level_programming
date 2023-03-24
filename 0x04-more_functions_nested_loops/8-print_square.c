#include "main.h"

/**
 * print_square - print # n by n times to draw a square.
 *
 * @size: the number of times # will be printed column by row
 */

void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (wid = 1; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	_putchar('\n');
}
