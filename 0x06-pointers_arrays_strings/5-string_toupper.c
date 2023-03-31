#include "main.h"

/**
 * string_toupper - converts all lower case alphabets to uppercase
 * @str: pointer to string to be converted
 * Return: all uppercased string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
