#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: pointer for first string
 * @src: pointer for second string to append
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dlen = 0;

	while (dest[index++])
		dlen++;

	for (index = 0; src[index]; index++)
		dest[dlen++] = src[index];

	return (dest);
}
