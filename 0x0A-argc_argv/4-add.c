#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * isNumber - checks if a string value is numeric
 * @s: string to be checked
 *
 * Return: 0 if @s is numeric else 1.
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
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 1 if @argv is not a number else 0..
 */

int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]) != 1)
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
