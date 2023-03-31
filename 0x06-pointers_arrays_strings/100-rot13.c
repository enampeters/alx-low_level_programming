#include "main.h"

/**
 * rot13 - rotates alphabets 13 places
 * @s: string to be encoded
 * Return: rotated alphabet strings
 */

char *rot13(char *s)
{
	char alph[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
			'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
			'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alph[j]; j++)
			if (s[i] == alph[j])
				s[i] = alph[(j + 39) % 52];
	}
	return (s);
}
