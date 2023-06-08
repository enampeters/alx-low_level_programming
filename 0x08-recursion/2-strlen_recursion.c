#include "main.h"

/**
 * _strlen_recursion - returns the lengh of a string.
 * @s: the string to be measured
 *
 * Return: length of the string as number
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
