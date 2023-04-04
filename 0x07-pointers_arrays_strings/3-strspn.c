#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be checked
 * @accept: string to compare with initial segments of @s
 *
 * Return: retuns number of bytes in @s which consists of @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; s[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
