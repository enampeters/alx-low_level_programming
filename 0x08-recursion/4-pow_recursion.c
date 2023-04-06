#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the base number
 * @y: the index of x
 *
 * Return: -1 if y < 0 else the value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
