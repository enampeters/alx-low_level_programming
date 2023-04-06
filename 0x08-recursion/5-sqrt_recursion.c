#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: -1 if no square root else square root of n
 */

int _sqrt_recursion(int n)
{
	int d = n / 2;
	int sqrt;

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	while (d < n / 2)
	{
		if (n % (d * d) == 0)
			sqrt = d * _sqrt_recursion(n / (d * d));
		else
			sqrt = -1;
	}
	return (sqrt);
}
