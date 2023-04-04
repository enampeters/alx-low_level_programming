#include "main.h"
/**
 * _strchr - searches for a character in a string
 * @c: character to be located
 * @s: the string containing the desired character
 *
 * Return: a pointer to the first occurence of the character if present
 *		NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
