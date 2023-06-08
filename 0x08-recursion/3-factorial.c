#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: given number
 *
 * Return: factorial of n product of positive numbers less than n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
