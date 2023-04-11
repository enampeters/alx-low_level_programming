#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * centchange - returns the minimum amount of coins
 * @cent: the balance left
 * Return: the minimum amount of coins
 */

int centchange(int cent)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, p;

	for (i = 0; coins[i]; i++)
	{
		if (cent <= 0)
			return (0);
		p = ((cent / coins[i]) + centchange(cent % coins[i]));
	}
	return (p);
}

/**
 * main - prints the least amount of coin needed for a change
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 1 if argc != 1 else 0.
 */

int main(int argc, char *argv[])
{
	int mincoins;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mincoins = centchange(atoi(argv[1]));
		printf("%d\n", mincoins);
	}
	return (0);
}
