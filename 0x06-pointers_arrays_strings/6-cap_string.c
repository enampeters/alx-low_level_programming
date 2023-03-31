#include "main.h"

/**
 * cap_string - capitalizes words in a string.
 * @str: array of string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) && ((i == 0) ||
				 (str[i - 1] == ' ') ||
				 (str[i - 1] == '\t') ||
				 (str[i - 1] == '\n') ||
				 (str[i - 1] == ',') ||
				 (str[i - 1] == ';') ||
				 (str[i - 1] == '.') ||
				 (str[i - 1] == '!') ||
				 (str[i - 1] == '?') ||
				 (str[i - 1] == '"') ||
				 (str[i - 1] == '(') ||
				 (str[i - 1] == ')') ||
				 (str[i - 1] == '{') ||
				 (str[i - 1] == '}')))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
