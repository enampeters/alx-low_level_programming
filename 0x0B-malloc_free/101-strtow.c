#include "main.h"
#include <stdlib.h>

int wordlen(char *str);
int countwords(char *str);
char **strtow(char *str);

/**
 * wordlen - locates the index marking the end of the
 *	first word ccontained within a string.
 * @str: the string
 *
 * Return: index marking the end of the word pointed to by @str.
 */
int wordlen(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * countwords - counts the number of words in a string
 * @str: the string
 *
 * Return: the number of words in @str
 */
int countwords(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if ((*str + index) != ' ')
		{
			words++;
			index += wordlen(str + index);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: the string to be split
 *
 * Return: NULL if str = NULL || str = "" || function fails
 *	else a pointer to an array of words
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = countwords(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = wordlen(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	return (strings);
}
