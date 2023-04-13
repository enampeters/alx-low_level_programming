#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: NULL if @ac == 0 || @av == NULL || function fails
 *		else a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int a, b, i;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	st = malloc(sizeof(char) * size + 1);

	if (st == NULL)
		return (NULL);
	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			st[i++] = av[a][b];

		st[i++] = '\n';
	}
	st[size] = '\0';
	return (st);
}
