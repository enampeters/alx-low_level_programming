#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * isNumber - checks if an argument is numeric
 * @s: string to be checked
 *
 * Return: 0 if @s is numeric, else 1.
 */

int isNumber(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - prints the sum of all arguments
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 if all arguments are numbers, else 1.
 */
int main (int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]) !=1)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
