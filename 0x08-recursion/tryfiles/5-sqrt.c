#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: -1 if no square root else square root of n
 */

int _sqrt_recursion(int n)
{
	int tmp, sqrt;

	sqrt = n / 2;
	tmp = 0;

	if (n == 1)
		return (1);
	else
		while (sqrt != tmp)
		{
			tmp = sqrt;
			sqrt = (n / tmp + tmp) / 2;
		}
	return (sqrt);
}
