#include "main.h"

/**
 * print_last_digit - displays the last digit of a number
 * @n: The integer to be checked
 *
 * Return: the last digit of an integer
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');
	return (m);
}
