#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicate string at
 *	a newly allocated memory
 * @str: string to be copied
 *
 * Return: NULL if @str == NULL or insufficient memory
 *	else a pointer to the duplicate @str
 */
char *_strdup(char *str)
{
	char *dup;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[l] = '\0';
	return (dup);
}
