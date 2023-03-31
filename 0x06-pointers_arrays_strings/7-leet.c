#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	char d[6] = "aeotl";
	int n[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; d[j] && n[j]; j++)
		{
			if (s[i] == d[j] || s[i] == d[j] - 32)
				s[i] = n[j] + '0';
		}
	}
	return (s);
}
