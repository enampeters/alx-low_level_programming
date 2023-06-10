#include <stdio.h>
#include <stdlib.h>

/**
 * centchange - returns the minimum amount of coins
 * @cent: the balance left
 *
 * Return: the minimum amount of coins
 */

int centchange(int cent)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, m;
	int p = 0;

	for (i = 0; coins[i]; i++)
	{
		if (cent <= 0)
			break;
		m = (cent / coins[i]);
		p += m;
		cent = (cent % coins[i]);
	}
	return (p);
}
/**
 * main - return the minimum coins for a change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return 1 if argc != 1 else 0.
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
