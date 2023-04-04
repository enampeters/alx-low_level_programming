#include "main.h"
/**
 * _strstr - locates a substring @needle in @haystack
 * @needle: substring to search for in @haystack
 * @haystack: string to search in for @needle
 *
 * Return: a pointer to the beginning of the substring,
 *	NULL if substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack)
	{
		for (i = 0, needle[i], i++)
		{
			if (*haystack == needle[i])
				return (haystack);
		}
		haystack++;
	}
	return (haystack);
}
