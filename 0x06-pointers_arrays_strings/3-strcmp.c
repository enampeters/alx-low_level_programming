#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: First string in the comparison
 * @s2: Second string to be compared to
 * Return: a positve, negative or zero value if
 * @s1 > @s2, @s1 < @s2 or @s1 = @s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i, j; 
	int cmp = 0;

	for (i = 0; s1[i]; i++)
	{
		for (j =0; s2[j]; j++)
		{
			if (s1[i] > s2[i])
				cmp++;
			else if (s1[i] < s2[i])
				cmp--;
			else
				cmp += 0;
		}
	}

	return (cmp);
}
