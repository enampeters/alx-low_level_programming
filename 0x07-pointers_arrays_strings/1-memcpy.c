#include "main.h"

/**
 * _memcpy - copies n bytes from memory area @src to memory area @dest
 * @src: source memory to copy from
 * @dest: destination memory to copy to
 * @n: size of memory at @src to be copied
 *
 * Return: a pointer to destination @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
