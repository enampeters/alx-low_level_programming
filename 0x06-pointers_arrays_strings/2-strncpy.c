#include "main.h"
/**
 * _strncpy - copies a string just like strcpy
 * @dest: the destination pointer for the copy
 * @src: the source pointer to copy from
 * @n: the size limit of the string to copy
 * Return: the destination pointer @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
