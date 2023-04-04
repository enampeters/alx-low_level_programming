#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 *	 pointed to by @s with constant byte @b
 * @n: size of the memory to be filled
 * @s: the pointer to the memory
 * @b: the constant character to fill the memory area with
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char cbyte = b;
	char *mem = s;

	for (i = 0; i < n; i++)
		mem[i] = cbyte;
	return (mem);
}
