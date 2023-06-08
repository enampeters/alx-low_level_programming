#include "main.h"

int is_div(int a, int d);
int is_prime_number(int n);

/**
 * is_div - checks if a number is divisible.
 * @a: number to be checked
 * @d: divisor
 *
 * Return: 1 if @a is divisible else 0.
 */
int is_div(int a, int d)
{
	if (a % d == 0)
		return (0);
	if (d == a / 2)
		return (1);
	return (is_div(a, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if number is prime else 0.
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_div(n, d));
}
