#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings @s1, @s2
 * @s1: first string
 * @s2: second string to join @s1
 *
 * Return: NULL if function fails else
 *	a pointer to joined string at new memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, ci = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[ci++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_str[ci++] = s2[i];

	return (concat_str);
}
