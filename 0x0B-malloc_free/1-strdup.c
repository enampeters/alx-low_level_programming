#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to anewly-allocated space in memory
 *	containing a copy of the string given as parameter
 * @str: the string to be copied
 *
 * Return: NULL if insuficient memory or str == NULL else a
 * 	pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[l] = '\0';

	return (dup);
}
