#include "main.h"

/**
 * _strncat - concatenate two strings up to specified bytes.
 * @dest: first string
 * @src: second string to append
 * @n: size of second string to append
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dlen = 0;

	while (dest[index++])
		dlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[dlen++] = src[index];

	return (dest);
}
