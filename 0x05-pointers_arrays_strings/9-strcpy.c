#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src to @dest
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: A pointer to the destination string
 */

char *_strcpy(char *src, char *dest)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
