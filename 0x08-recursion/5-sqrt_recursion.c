#include "main.h"
int find_sqr(int a, int r);
int _sqrt_recursion(int n);

/**
 * find_sqr - finds the natural square root of a number.
 * @a: number to find roots of
 * @r: root to be tested
 *
 * Return: -1 if no natural square root else square root of a
 */
int find_sqr(int a, int r)
{
	if ((r * r) == a)
		return (r);
	if (r == a / 2)
		return (-1);
	return (find_sqr(a, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 *
 * Return: -1 if no square root else square root of n
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqr(n, r));
}
